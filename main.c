#include <stdio.h>
#include <libc.h>

// COLOR
#define G "\x1b[32m"
#define C "\x1b[36m"
#define S "\x1b[0m"
// MACRO
#define JUMP printf("\n");
#define BIG_JUMP(test) printf("-------------------%s-------------------\n\n", test);
#define STRLEN(s) printf(G"STRLEN   : '%s' => len = %ld\n"S, s, strlen(s))
#define FT_STRLEN(s) printf(C"FT_STRLEN: '%s' => len = %ld\n"S, s, ft_strlen(s))

size_t	ft_strlen(const char *s);
//char	*ft_strcpy(char * dst, const char * src);

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
	//char dest[100];
	//printf("%s\n", ft_strcpy(dest, "coucou"));
	BIG_JUMP("ft_strcpy");
}
int main()
{
	test_ft_strlen();
	//test_ft_strcpy();
}
