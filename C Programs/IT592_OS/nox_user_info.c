#include<stdio.h>
#include<pwd.h>
#include<grp.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	struct passwd *user;
	struct group *grp;
	char **members;
	uid_t u = getuid();
	user = getpwuid(u);
	gid_t g = getgid();
	grp = getgrgid(g);
	members = grp->gr_mem;
	printf("The user login names are: %s \n", user->pw_name);
	printf("The users' encrypted passwords are: %s \n", user->pw_passwd);
	printf("The users' IDs are: %d \n", (int)(user->pw_uid));
	printf("The users' group IDs are: %d \n", (int)(user->pw_gid));
	printf("The users' real names are: %s \n", user->pw_gecos);
	printf("The users' home directories are: %s \n", user->pw_dir);
	printf("The users' default shells are: %s \n", user->pw_shell);
	printf("The name of the group is %s\n", grp->gr_name);
	printf("The ID of the group is %d\n", (int)(grp->gr_gid));
	while(*members)
	{
		printf("The members of the group are %s\n", *(members));
		members++;
	}
	return 0;
}
