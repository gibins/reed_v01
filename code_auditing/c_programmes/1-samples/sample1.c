#include<stdio.h>
#include<string.h>


int log_error(int farray, char *msg)
{
	char *err, *mesg;
	char buffer[24];
	
	printf("\nInside log_error");

#ifdef DEBUG
	printf("\nInside debug before first fprintf ");
	fprintf(stderr,"Mesg is at : Ox%80x\n", &mesg);
	fprintf(stderr, "Mesg is pointing at : 0x%08x\n",mesg);
#endif

	printf("\n\nAfter endIf");
	fprintf(stderr,"\nMesg at %s \n",mesg);
	fprintf(stderr, "\nMesg is pointing %s \n", mesg);


	memset(buffer,0x00,sizeof(buffer));
	sprintf(buffer, "Error : %s", mesg);

	fprintf(stdout,"%s\n",buffer);
	return 0;
}

int main(void)
{
	printf("Program Started ");
	log_error(1, "Unable to login");
	/*switch(do_auth())
	{
		case -1:
			log_error(ERR_CRITIC|ERR_AUTH, "Unable to login");
			break;
		default:
			break;
	}*/
	return 0;
}
