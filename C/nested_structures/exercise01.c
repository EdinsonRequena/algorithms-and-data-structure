#include <stdio.h>

#define LON 128
#define TABLE 5

typedef struct {
	char name[LON];
	char champion[LON];
	int kills;
	int deaths;
	int assists;
} players;

int main() {
	players game[TABLE];

    printf("Name: ");
    scanf("%s", &game[0].name);
    printf("Champion: ");
    scanf("%s", &game[0].champion);
	printf("kills: ");
    scanf("%d", &game[0].kills);
    printf("deaths: ");
    scanf("%d", &game[0].deaths);
    printf("assists: ");
    scanf("%d", &game[0].assists);
    float player1_ratio = (float)(game[0].kills + game[0].assists)/game[0].deaths;
	printf("Ratio player1 %f\n", player1_ratio);

    printf("Name: ");
    scanf("%s", &game[1].name);
    printf("Champion: ");
    scanf("%s", &game[1].champion);
	printf("kills: ");
    scanf("%d", &game[1].kills);
    printf("deaths: ");
    scanf("%d", &game[1].deaths);
    printf("assists: ");
    scanf("%d", &game[1].assists);
    float player2_ratio = (float)(game[1].kills + game[1].assists)/game[1].deaths;
	printf("Ratio player2%f\n", player2_ratio);

    printf("Name: ");
    scanf("%s", &game[2].name);
    printf("Champion: ");
    scanf("%s", &game[2].champion);
	printf("kills: ");
    scanf("%d", &game[2].kills);
    printf("deaths: ");
    scanf("%d", &game[2].deaths);
    printf("assists: ");
    scanf("%d", &game[2].assists);
    float player3_ratio = (float)(game[2].kills + game[2].assists)/game[2].deaths;
	printf("Ratio player3%f\n", player1_ratio);

    printf("Name: ");
    scanf("%s", &game[3].name);
    printf("Champion: ");
    scanf("%s", &game[3].champion);
	printf("kills: ");
    scanf("%d", &game[3].kills);
    printf("deaths: ");
    scanf("%d", &game[3].deaths);
    printf("assists: ");
    scanf("%d", &game[3].assists);
    float player4_ratio = (float)(game[3].kills + game[3].assists)/game[3].deaths;
	printf("Ratio player4%f\n", player1_ratio);

    printf("Name: ");
    scanf("%s", &game[4].name);
    printf("Champion: ");
    scanf("%s", &game[4].champion);
	printf("kills: ");
    scanf("%d", &game[4].kills);
    printf("deaths: ");
    scanf("%d", &game[4].deaths);
    printf("assists: ");
    scanf("%d", &game[4].assists);
    float player5_ratio = (float)(game[4].kills + game[4].assists)/game[4].deaths;
	printf("Ratio player5%f\n", player1_ratio);

    int total_kills = game[0].kills + game[1].kills + game[2].kills + game[3].kills + game[4].kills;
	int total_deaths = game[0].deaths + game[1].deaths + game[2].deaths + game[3].deaths + game[4].deaths;
	int total_assists = game[0].assists + game[1].assists + game[2].assists + game[3].assists + game[4].assists;
	float total_ratio = (float)(total_kills + total_deaths) / total_assists;

    printf("Players %s%s%s%s%s have kda: %d/%d/%d and ratio: %f", game[0].name, game[1].name, game[2].name, game[3].name, game[4].name, total_kills,total_deaths, total_assists, total_ratio);

    return 0;
}
