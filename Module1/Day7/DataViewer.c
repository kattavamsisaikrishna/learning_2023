#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sensor
{
	int EntryNo;
	char sensorNo[3];
	float temperature;
	int humidity;
	int light;
	char time[8];
};
typedef struct sensor sensor;
void displayFile(FILE *fp)
{
	char *ptr = NULL;
	size_t length = 0;
	while(getline(&ptr,&length,fp) != -1)
	{
		printf("%s",ptr);
	}
	free(ptr);
}
int countLines(FILE *fp)
{
	
	int count=0;
	char *ptr = NULL;
	size_t length = 0;
	while(getline(&ptr,&length,fp) != -1)
	{
		count++;
	}
	free(ptr);
	return count;
}
void initialize(FILE *fp,sensor *s)
{
	
	int i=0;
	char *ptr = NULL;
	size_t length = 0;
	getline(&ptr,&length,fp);
	while(getline(&ptr,&length,fp) != -1)
	{
		
		char *token = strtok(ptr,","); 
		if(token != NULL) s[i].EntryNo = atoi(token);
		token = strtok(NULL,",");
		if(token != NULL) strcpy(s[i].sensorNo,token);
		token = strtok(NULL,",");
		if(token != NULL) s[i].temperature = atof(token);
		token = strtok(NULL,",");
		if(token != NULL) s[i].humidity = atoi(token);
		token = strtok(NULL,",");
		if(token != NULL) s[i].light = atoi(token);
		token = strtok(NULL,",");
		if(token != NULL) strcpy(s[i].time,token);
		i++;
		
	}
	free(ptr);
}
void display_array_of_structures(sensor *s,int size)
{
	for(int i=0;i<size;i++)
	{
		if (s[i].EntryNo != 0)
		printf("%d %s %f %d %d %s\n",s[i].EntryNo,s[i].sensorNo,s[i].temperature,s[i].humidity,s[i].light,s[i].time);
	}
}
int main()
{
	FILE *fp;
	fp = fopen("sensorData.csv","r");
	int n = countLines(fp);
	sensor *s = (sensor*)calloc(n,sizeof(sensor));
	rewind(fp);
	displayFile(fp);printf("\n");
	rewind(fp);
	initialize(fp,s);
	display_array_of_structures(s,n-1);
	free(s);
}
