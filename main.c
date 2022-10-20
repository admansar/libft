#include "libft.h"
int main()
{
	t_list s[2];
	s -> content = "ana";
	s -> next = s+1;
	(s+1) -> content = "adnan";
	(s+1) -> next = NULL;
	printf("%s %s",s -> content, s->next->content);
	return (0);
}
