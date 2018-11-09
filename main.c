//ft_memset
int main()
{
    char a[2];
    char *b;

    b = a;
    a[0] = '\0';
    a[1] = 'c';
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    b = memset(b, 98, 1);
    printf("%c\n%c\n", a[0], a[1]);
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);

    char c[2];
    char *d;

    d = c;
    c[0] = '\0';
    c[1] = 'c';
    printf("\nnew :\n%d\n", c[0]);
    printf("%d\n", c[1]);
    d = ft_memset(d, 98, 1);
    printf("%c\n%c\n", c[0], c[1]);
    printf("%d\n", c[0]);
    printf("%d\n", c[1]);
    return (0);
}

//ft_bzero
int main()
{
    char a[3];
    char *b;

    b = a;
    a[0] = 'b';
    a[1] = 'c';
    a[2] = 'z';
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);
    bzero(b, 2);
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);

    char c[3];
    char *d;

    d = c;
    c[0] = 'b';
    c[1] = 'c';
    c[2] = 'z';
    printf("\n\n%d\n", c[0]);
    printf("%d\n", c[1]);
    printf("%d\n", c[2]);
    bzero(d, 2);
    printf("%d\n", c[0]);
    printf("%d\n", c[1]);
    printf("%d\n", c[2]);
    return (0);
}

//ft_memcpy
int main(int argc, char **argv)
{
    if (argc == 5)
    {
        printf("%s\n", memcpy(argv[1], argv[2], 1));
        printf("%s", ft_memcpy(argv[3], argv[4], 1));
    }
    return (0);
}

//ft_memccpy
int main(int argc, char **argv)
{
    if (argc == 5)
    {
        printf("%s\n", memccpy(argv[1], argv[2], 116, 3));
        printf("%s", ft_memccpy(argv[3], argv[4], 116, 3));
    }
    return (0);
}

//ft_memmove
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s\n", memmove(av[1] + 2, av[1], 3));
        printf("%s", ft_memmove(av[2] + 2, av[2], 3));
    }
    return (0);
}

//ft_memchr
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s\n", memchr(av[1] + 2, 116, 7));
        printf("%s", ft_memchr(av[2] + 2, 116, 7));
    }
    return (0);
}

//ft_memcmp
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%d\n", memcmp(av[1], av[2], 7));
        printf("%d", ft_memcmp(av[1], av[2], 7));
    }
    return (0);
}

//ft_strchr
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s\n", strchr(av[1], 116));
        printf("%s", ft_strchr(av[1], 116));
    }
    return (0);
}

//ft_strrchr
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s\n", strrchr(av[1], 116));
        printf("%s", ft_strrchr(av[1], 116));
    }
    return (0);
}

//ft_strnstr
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s\n", strnstr(av[1], av[2], 7));
        printf("%s", ft_strnstr(av[1], av[2], 7));
    }
    return (0);
}

//ft_isalpha
int main(void)
{
    printf("%d\n", isalpha('@'));
    printf("%d", ft_isalpha('@'));
    return (0);
}

//ft_isdigit
int main(void)
{
    printf("%d\n", isdigit('3'));
    printf("%d", ft_isdigit('9'));
    return (0);
}

//ft_isalnum
int main(void)
{
    printf("%d\n", isalnum('A'));
    printf("%d", ft_isalnum('A'));
    printf("%d", ft_isalnum('a'));
    printf("%d", ft_isalnum('9'));
    printf("%d", ft_isalnum('@'));
    printf("%d", ft_isalnum('0'));
    return (0);
}

//ft_isascii
int main(void)
{
    printf("%d\n", isascii(0));
    printf("%d\n", isascii(-1));
    printf("%d\n", isascii(128));
    printf("%d", ft_isascii('9'));
    printf("%d", ft_isascii(0));
    printf("%d", ft_isascii(-1));
    printf("%d", ft_isascii(100));
    printf("%d", ft_isascii(127));
    printf("%d", ft_isascii(128));
    return (0);
}

//ft_isprint
int main(void)
{
    printf("%d", isprint(0));
    printf("%d", isprint(31));
    printf("%d", isprint(32));
    printf("%d", isprint(127));
    printf("%d\n", isprint(128));
    printf("%d", ft_isprint(0));
    printf("%d", ft_isprint(31));
    printf("%d", ft_isprint(32));
    printf("%d", ft_isprint(127));
    printf("%d", ft_isprint(128));
    return (0);
}

//ft_toupper
int main(void)
{
    printf("%d", toupper(0));
    printf("%d", toupper(65));
    printf("%d", toupper('Z'));
    printf("%d", toupper('9'));
    printf("%d", toupper('@'));
    printf("%d", toupper('a'));
    printf("%d", toupper('e'));
    printf("%d", toupper('z'));
    printf("%d\n", toupper(123));
    printf("%d", ft_toupper(0));
    printf("%d", ft_toupper(65));
    printf("%d", ft_toupper('Z'));
    printf("%d", ft_toupper('9'));
    printf("%d", ft_toupper('@'));
    printf("%d", ft_toupper('a'));
    printf("%d", ft_toupper('e'));
    printf("%d", ft_toupper('z'));
    printf("%d", ft_toupper(123));
    return (0);
}

//ft_tolower
int main(void)
{
    printf("%d", tolower(0));
    printf("%d", tolower(65));
    printf("%d", tolower('Z'));
    printf("%d", tolower('9'));
    printf("%d", tolower('@'));
    printf("%d", tolower('a'));
    printf("%d", tolower('e'));
    printf("%d", tolower('z'));
    printf("%d\n", tolower(123));
    printf("%d", ft_tolower(0));
    printf("%d", ft_tolower(65));
    printf("%d", ft_tolower('Z'));
    printf("%d", ft_tolower('9'));
    printf("%d", ft_tolower('@'));
    printf("%d", ft_tolower('a'));
    printf("%d", ft_tolower('e'));
    printf("%d", ft_tolower('z'));
    printf("%d", ft_tolower(123));
    return (0);
}

//ft_strdup
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%s", strdup(av[1]));
        printf("%s", ft_strdup(av[2]));
    }
    return (0);
}

//ft_memalloc
int main(int ac, char **av)
{
    char *a = ft_memalloc(7);
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[7]);

    a[0] = 'B';
    a[1] = 'o';
    a[2] = 'n';
    a[3] = 'j';
    a[4] = 'o';
    a[5] = 'u';
    a[6] = 'r';

    printf("%s, %d", a, a[7]);
    return (0);
}

//ft_strtrim
int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s", ft_strtrim(av[1]));
    }
    return (0);
}

//ft_strsplit.c
int main(int ac, char **av)
{
    int i;
    char **a;

    i = -1;
    if (ac == 2)
    {
        a = ft_strsplit(av[1], '*');
        while (a[++i])
            printf("%s\n", a[i]);
    }
    return (0);
}

//ft_strlcat
int main()
{
    char dest[15] = "";
    char deste[15] = "";
    char src[] = "bdssAAAAAAssssd";
    int nb = 15;

    printf("%u %s\n", ft_strlcat(dest, src, nb), dest);
    printf("%lu %s", strlcat(deste, src, nb), deste);
    return (0);
}

//ft_lstnew
void    print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->content);
        list = list->next;
    }
}

int main(int ac, char **av)
{
    char *t[2];
    t[0] = "Hey";
    print_list(ft_lstnew(t[0], 4));

    return (0);
}