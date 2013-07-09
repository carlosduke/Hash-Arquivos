#include <stdio.h>
#include <time.h>
#include <string.h>
#include "global.h"
#include "md5.h"

#define TEST_BLOCK_LEN 1000
#define TEST_BLOCK_COUNT 1000

static void MDString PROTO_LIST ((char *));
static void MDTimeTrial PROTO_LIST ((void));
static void MDTestSuite PROTO_LIST ((void));
static void MDFile PROTO_LIST ((char *));
static void MDFilter PROTO_LIST ((void));
static void MDPrint PROTO_LIST ((unsigned char [16]));

#define MD 5
#define MD_CTX MD5_CTX
#define MDInit MD5Init
#define MDUpdate MD5Update
#define MDFinal MD5Final

void exibeContexto(MD_CTX,char*);

int main (argc, argv)
int argc;
char *argv[];
{
	MDString ("teste");
	return (0);
}

/* Digests a string and prints the result. */
static void MDString (string)
char *string;
{
	MD_CTX context;
	unsigned char digest[16];
	unsigned int len = strlen (string);

	MDInit (&context);
	exibeContexto(context,"Inicializacao do contexto");
	MDUpdate (&context, string, len);
	MDFinal (digest, &context);

	printf ("MD%d(%s)\n", MD, string);
	MDPrint (digest);
	printf ("\n");
}

/* Prints a message digest in hexadecimal. */
static void MDPrint (digest)
unsigned char digest[16];
{
	unsigned int i;
	printf("Digest: \n");
	for (i = 0; i < 16; i++)
		printf ("%02x", digest[i]);
	printf("\n%s","698dc19d489c4e4db73e28a713eab07b");
}

void exibeContexto(contexto,mensagem)
MD_CTX contexto;
char* mensagem;
{
	printf(
		"\
		%s\n\
		State:\
		\t[0]=>%d\n\
		\t[1]=>%d\n\
		\t[2]=>%d\n\
		\t[3]=>%d\n\
		Count: %d\n\
		Buffer: %s\n\n\
		",
		mensagem,
		contexto.state[0],contexto.state[1],contexto.state[2],contexto.state[3],
		contexto.count,
		contexto.buffer
	);
}