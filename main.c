#include <stdio.h>
#include <libc.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
/*
**	COLOR
*/
#define G "\x1b[32m"
#define C "\x1b[36m"
#define S "\x1b[0m"
/*
**	MACRO
*/
#define JUMP printf("\n");
#define BIG_JUMP(test) printf("-------------------%s-------------------\n\n", test);
// STRLEN
#define STRLEN(s) printf(G"STRLEN   : '%s' => len = %ld\n"S, s, strlen(s))
#define FT_STRLEN(s) printf(C"FT_STRLEN: '%s' => len = %ld\n"S, s, ft_strlen(s))
// STRLCPY
#define STRLCPY(d, s) printf(G"STRLCPY   : |%s|\n"S, strcpy(d, s))
#define FT_STRLCPY(d, s) printf(C"FT_STRLCPY: |%s|\n"S, ft_strcpy(d, s))
// STRCMP
#define STRCMP(s1, s2) printf(G"STRCMP   : |%d|\n"S, strcmp(s1, s2))
#define FT_STRCMP(s1, s2) printf(C"FT_STRCMP: |%d|\n"S, ft_strcmp(s1, s2))
// WRITE
#define WRITE(fd, buf, size) printf(G"<== WRITE   : |%ld|\n"S, write(fd, buf, size))
#define FT_WRITE(fd, buf, size) printf(C"<== FT_WRITE: |%ld|\n"S, ft_write(fd, buf, size))
// READ
#define READ(fd, buf, size) printf(G"READ   : |%ld|\n"S, read(fd, buf, size))
#define FT_READ(fd, buf, size) printf(C"FT_READ: |%ld|\n"S, ft_read(fd, buf, size))
// STRDUP
#define STRDUP(s) printf(G"STRDUP   : |%s|\n"S, strdup(s))
#define FT_STRDUP(s) printf(C"FT_STRDUP: |%s|\n"S, ft_strdup(s))

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char * dst, const char * src);
int     ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);

void	test_ft_strlen(void)
{
	BIG_JUMP("ft_strlen");
	STRLEN("coucou");
	FT_STRLEN("coucou");
	JUMP;
	STRLEN("");
	FT_STRLEN("");
	JUMP;
	STRLEN("esapace fin ");
	FT_STRLEN("esapace fin ");
	JUMP;
	STRLEN(" espace debut");
	FT_STRLEN(" espace debut");
	JUMP;
	STRLEN("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	FT_STRLEN("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	JUMP;
}
void	test_ft_strcpy(void)
{
	char d[1000];

	BIG_JUMP("ft_strcpy");
	STRLCPY(d, "coucou");
	FT_STRLCPY(d, "coucou");
	JUMP;
	STRLCPY(d, "");
	FT_STRLCPY(d, "");
	JUMP;
	STRLCPY(d, "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	FT_STRLCPY(d, "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	JUMP;
}
void	test_ft_strcmp(void)
{
	BIG_JUMP("ft_strcmp");
	STRCMP("coucou", "coucou");
	FT_STRCMP("coucou", "coucou");
	JUMP;
	STRCMP("coucou1", "coucou");
	FT_STRCMP("coucou1", "coucou");
	JUMP;
	STRCMP("coucou", "coucou1");
	FT_STRCMP("coucou", "coucou1");
	JUMP;
	STRCMP("a", "z");
	FT_STRCMP("a", "z");
	JUMP;
	STRCMP("z", "a");
	FT_STRCMP("z", "a");
	JUMP;
	STRCMP("", "");
	FT_STRCMP("", "");
	JUMP;
	STRCMP("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !", "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	FT_STRCMP("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !", "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	JUMP;
}
void	test_ft_write(void)
{
	BIG_JUMP("ft_write");
	WRITE(1, "bj Paris !", 11);
	FT_WRITE(1, "bj Paris !", 11);
	JUMP;
	WRITE(1, "", 1);
	FT_WRITE(1, "", 1);
	JUMP;
	WRITE(1, "salut", -42);
	FT_WRITE(1, "salut", -42);
	JUMP;
	WRITE(-1, "salut", 42);
	FT_WRITE(-1, "salut", 42);
	JUMP;
	WRITE(3, "salut", 42);
	FT_WRITE(3, "salut", 42);
	JUMP;
	WRITE(1, "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !", 190);
	FT_WRITE(1, "ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !", 190);
	JUMP;
}
void	test_ft_read()
{
	char buff[1000];

	BIG_JUMP("ft_read");
	READ(0, buff, 10);
	buff[9] = 0;
	printf("buff = |%s|\n", buff);
	FT_READ(0, buff, 10);
	buff[9] = 0;
	printf("buff = |%s|\n", buff);
	JUMP;
}
void	*mallol(size_t size)
{
	size = 0;
	return (0);
}
void	test_ft_strdup(void)
{
	BIG_JUMP("ft_strdup");
	STRDUP("bj Paris !");
	FT_STRDUP("bj Paris !");
	JUMP;
	STRDUP("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	FT_STRDUP("ici je test une longue pharse de plusieurs mot si le test plante tempis sion je sui sun genie metci le peulpel romain de m'accorder cette chacnd pour le restant de mes jours ainssi au la fin de mn pere what !");
	JUMP;
	STRDUP("");
	FT_STRDUP("");
	JUMP;
	//while (1);
}
int main()
{
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_write();
	test_ft_read();
	test_ft_strdup();
}
