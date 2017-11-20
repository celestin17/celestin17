#include <stdio.h>
#include <stdlib.h>

typedef struct		s_classe
{
	char	*spell1;
	char	*spell2;
	char	*spell3;
	int		power;
	int		speed;

}					t_classe;

typedef struct		s_perso
{
	char				*name;
	struct s_classe		*classe;
	int					hp;
}					t_perso;

t_perso		*ft_create_perso(char	*name, char *spells1, char *spells2, char *spells3)
{
	t_perso		*perso;
	t_classe	*classe;
	classe = (t_classe*)malloc(sizeof(t_classe));
	perso = (t_perso*)malloc(sizeof(struct s_perso));
	if (perso)
	{
		perso->name = name;
		perso->hp = 100;
		classe->spell1 = spells1;
		classe->spell2 = spells2;
		classe->spell3 = spells3;
		classe->power = 100;
		classe->speed = 25;
		perso->classe = classe;
	}
	return (perso);
}

int		main(int argc, char **argv)
{
	if (argc != 5)
		return (0);
	t_perso		*personnage;
	personnage = ft_create_perso(argv[1], argv[2], argv[3], argv[4]);
	argc = rand() % 1;
	if (argc >= 1)
	{
		printf("Le chevalier %s souhaite se battre contre le dragon.\n%s dispose de %dPV au debut du combat.\nLe dragon lance une attaque. Le chevalier l esquive grace a ca vitesse de %dkm/h\nLe dragon ne laisse pas le temps a %s de lancer son sort %s... %s se prend un coup et perd 20PV\nIl reste %dPV a %s.. %s ne se laisse pas faire et enchaine le dragon avec son sort %s puis son sort ultime %s.\nGrace a sa puissance de %d, le chevalier desintegre le dragon et gagne le combat.", personnage->name, personnage->name, personnage->hp, personnage->classe->speed, personnage->name, personnage->classe->spell1, personnage->name, (personnage->hp - 20), personnage->name, personnage->name, personnage->classe->spell2, personnage->classe->spell3, personnage->classe->power);
	}
	else
	{
		printf("Le chevalier %s souhaite se battre contre le dragon.\n%s dispose de %dPV au debut du combat.\nLe dragon lance une attaque. Le chevalier l esquive grace a ca vitesse de %dkm/h\nLe dragon ne laisse pas le temps a %s de lancer son sort %s... %s se prend un coup et perd 100PV\nIl reste %dPV a %s, il est mort..", personnage->name, personnage->name, personnage->hp, personnage->classe->speed, personnage->name, personnage->classe->spell1, personnage->name, (personnage->hp - 100), personnage->name);
	}
		
		return (0);
}
