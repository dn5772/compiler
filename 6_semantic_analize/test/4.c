struct node {
	char name;
	int value;
	struct node *link; 
} kim;
struct node lee;

enum ee {
	zero,
	one,
	seven = 2 + 5
} num;

typedef enum {false, true} BOOLEAN;
BOOLEAN a = true;