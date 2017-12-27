#include <stdio.h>
#include <stdlib.h>


#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define CYN "\x1B[36m"
#define RESET "\x1B[0m"


int ft_atoi(char *str);


int main(int ac, char *av[])
{
	(void)ac;
	char str[] = " -\r123 ";
	char str2[] = "+ +123 VIM";
	char str3[] = "+123 zsh";
	char str4[] = "--emacs123 ";
	char str5[] = "+\t123 zsh";
	char str6[] = " -+-123 zsh";
	char str7[] = " -123 zsh";
	char str8[] = " +a123 zsh";
	char str9[] = " 2147483647";
	char str10[] = " -2147483648";
	char str11[] = " - +123";
	printf("\t\t\t\t\t\t\t- out - \t\t\t\t\t\t\t\t\t "BLU "- ft_atoi - "RESET""GRN" \t\t\t\t\t\t\t\t\t - atoi - "RESET"\n\n");
	if (ac > 2)
	{
		printf("\t\t\t\t\t\t\t%s", av[1]);
		if (ft_atoi(av[1]) != atoi(av[1]))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(av[1]), atoi(av[1]));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(av[1]), atoi(av[1]));
	}
	else
	{
		printf("\t\t\t\t\t\t\t%s", str);
		if (ft_atoi(str) != atoi(str))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str), atoi(str));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str), atoi(str));
		printf("\t\t\t\t\t\t\t%s", str2);
		if (ft_atoi(str2) != atoi(str2))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str2), atoi(str2));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str2), atoi(str2));
		printf("\t\t\t\t\t\t\t%s", str3);
		if (ft_atoi(str3) != atoi(str3))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str3), atoi(str3));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str3), atoi(str3));
		printf("\t\t\t\t\t\t\t%s", str4);
		if (ft_atoi(str4) != atoi(str4))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str4), atoi(str4));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str4), atoi(str4));
		printf("\t\t\t\t\t\t\t%s", str5);
		if (ft_atoi(str5) != atoi(str5))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str5), atoi(str5));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str5), atoi(str5));
		printf("\t\t\t\t\t\t\t%s", str6);
		if (ft_atoi(str6) != atoi(str6))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str6), atoi(str6));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str6), atoi(str6));
		printf("\t\t\t\t\t\t\t%s", str7);
		if (ft_atoi(str7) != atoi(str7))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str7), atoi(str7));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str7), atoi(str7));
		printf("\t\t\t\t\t\t\t%s", str8);
		if (ft_atoi(str8) != atoi(str8))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str8), atoi(str8));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str8), atoi(str8));
		printf("\t\t\t\t\t\t\t%s", str9);
		if (ft_atoi(str9) != atoi(str9))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str9), atoi(str9));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str9), atoi(str9));
		printf("\t\t\t\t\t\t\t%s", str10);
		if (ft_atoi(str10) != atoi(str10))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str10), atoi(str10));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str10), atoi(str10));
		printf("\t\t\t\t\t\t\t%s", str11);
		if (ft_atoi(str11) != atoi(str11))
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""RED"%d "RESET""BLU "\t\t\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str11), atoi(str11));
		else
			printf(RESET"\t\t\t\t\t"BLU "||\t\t\t\t\t "RESET""GRN"%d "RESET""BLU "\t\t\t||\t\t\t\t"RESET""GRN"%d"RESET"\n",
					ft_atoi(str11), atoi(str11));


	}




}
