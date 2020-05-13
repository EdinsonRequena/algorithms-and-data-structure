#include <stdio.h>

#define LON 128

typedef struct
{
	char user_name[LON];
	int user_level;
	int exp;
	char champ_name[LON];
	float kills;
	float deaths;
	float assists;
} user1;

int main() {
    user1 user;

	printf("What's your name: ?");
	scanf("%s", &user.user_name);

    printf("What's the champion name: ?");
	scanf("%s", &user.champ_name);

	printf("What's your level: ?");
	scanf("%d", &user.user_level);

	printf("What's your exp: ?");
	scanf("%d", &user.exp);

	printf("How much kills do you hve: ?");
	scanf("%f", &user.kills);

	printf("How mouch deaths do you hace: ?");
	scanf("%f", &user.deaths);

	printf("How much assists do you have: ?");
	scanf("%f", &user.assists);

    float kda = (user.kills + user.assists) / user.deaths;

    printf("name%s\n", user.user_name);
    printf("champion%s\n", user.champ_name);
    printf("level%d\n", user.user_level);
    printf("exp%d\n", user.exp);
    printf("kills%f\n", user.kills);
    printf("deaths%f\n", user.deaths);
    printf("assists%f\n", user.assists);
    printf("kda%f\n", kda);

    return 0;
}