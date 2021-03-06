/*

Vamos a hacer un programa que solicite al usuario datos sobre su última partida al LoL y muestre 
el ratio KDA por pantalla. Para ello, será necesario almacenarlos en una estructura.

------------------------resuelto por pasos-----------------------------------

1)Definir una constante a la cual le pasaremos por valor la longitud de los vectores que crearemos mas adelante (opcional)

	*) ejemplo en codigo:
		#define LON 10

2)Crear una estructura con las variables que almacenen el nombre de usuario, nivel del usuario, experiencia, nombre del campeon, asesinatos, muertes y asistencias.

	*) ejemplo en codigo:
		
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

3)Solicitarle al usuario los datos

	*)ejemplo en codigo:

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

4) sacar el ratio KDA
	
	a)operacion: (k + a) / d

		*)ejemplo en codigo:
		
			float kda = (user.kills + user.assists) / user.deaths;

5) imprimir todo por pantalla

	*)ejemplo de codigo:
		printf("name%s\n", user.user_name);
    	printf("champion%s\n", user.champ_name);
    	printf("level%d\n", user.user_level);
    	printf("exp%d\n", user.exp);
    	printf("kills%f\n", user.kills);
    	printf("deaths%f\n", user.deaths);
    	printf("assists%f\n", user.assists);
    	printf("kda%f\n", kda);

*/

#include <stdio.h>

#define LON 128

typedef struct
{
	char user_name[LON];
	int user_level;
	int exp;
	char champ_name[LON];
	int kills;
	int deaths;
	int assists;
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
	scanf("%d", &user.kills);

	printf("How mouch deaths do you hace: ?");
	scanf("%d", &user.deaths);

	printf("How much assists do you have: ?");
	scanf("%d", &user.assists);

    float kda = (float)(user.kills + user.assists) / user.deaths;

    printf("name%s\n", user.user_name);
    printf("champion%s\n", user.champ_name);
    printf("level%d\n", user.user_level);
    printf("exp%d\n", user.exp);
    printf("kills%d\n", user.kills);
    printf("deaths%d\n", user.deaths);
    printf("assists%d\n", user.assists);
    printf("kda%f\n", kda);

    return 0;
}