#include<stdio.h>
#include<stdlib.h>
#include<pwd.h>
#include<sys/types.h>
#include<unistd.h>
#include<grp.h>

typedef struct passwd uinf;
typedef struct group grp;

int main()
{

  uinf *users;
  grp *grp;
  char **members;

  uid_t u = getuid();
  users = getpwuid(u);
  grp = getgrgid(users->pw_gid);

	printf("User's login name : %s \n",users->pw_name);
	printf("Password (Encrypted) : %s \n",users->pw_passwd);
	printf("User's ID no : %d \n",(int)users->pw_uid);
	printf("User's group ID : %d \n",(int)users->pw_gid);
	printf("User's real name : %s \n",users->pw_gecos);
	printf("User's Home directory : %s \n",users->pw_dir);
	printf("User's Default shell : %s \n",users->pw_shell);

  printf("Group ID :%d\n",(int)grp->gr_gid);
  printf("Group Name :%s\n",grp->gr_name);

	members=grp->gr_mem;

	while(*members)
	{

		printf("%s \n",*(members));
		members++;

	}

	return(0);

}
