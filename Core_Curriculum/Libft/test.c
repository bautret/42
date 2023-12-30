/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautret <bautret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:36:03 by bautret           #+#    #+#             */
/*   Updated: 2023/11/20 16:41:15 by bautret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    //ft_atoi
    char test1[] = "12345";
    char test2[] = "-6789";
    char test3[] = "+42";
    char test4[] = " ----999";

    printf("--ft_atoi:          ");
    printf("%s == %d || ",test1, ft_atoi(test1));
    printf("%s == %d || ",test2, ft_atoi(test2));
    printf("%s == %d || ",test3, ft_atoi(test3));
    printf("%s == %d\n",test4, ft_atoi(test4));

    //ft_isalpha
    char test_alpha1 = 'G';
    char test_alpha2 = 'k';
    char test_alpha3 = '3';

    printf("--ft_is_alpha:      ");
    printf("%c == %s  || ", test_alpha1, ft_isalpha(test_alpha1) ? "Alpha" : "Not Alpha");
    printf("%c == %s  || ", test_alpha2, ft_isalpha(test_alpha2) ? "Alpha" : "Not Alpha");
    printf("%c == %s\n", test_alpha3, ft_isalpha(test_alpha3) ? "Alpha" : "Not Alpha");

    //ft_isdigit
    char test_digit1 = '9';
    char test_digit2 = '1';
    char test_digit3 = 'A';

    printf("--ft_is_digit:      ");
    printf("%c == %s  || ", test_digit1, ft_isdigit(test_digit1) ? "Digit" : "Not Digit");
    printf("%c == %s  || ", test_digit2, ft_isdigit(test_digit2) ? "Digit" : "Not Digit");
    printf("%c == %s\n", test_digit3, ft_isdigit(test_digit3) ? "Digit" : "Not Digit");

    //ft_isalnum
    char test_alnum1 = '9';
    char test_alnum2 = 'z';
    char test_alnum3 = 'A';

    printf("--ft_is_alnum:      ");
    printf("%c == %s  || ", test_alnum1, ft_isalnum(test_alnum1) ? "Alnum" : "Not Alnum");
    printf("%c == %s  || ", test_alnum2, ft_isalnum(test_alnum2) ? "Alnum" : "Not Alnum");
    printf("%c == %s\n", test_alnum3, ft_isalnum(test_alnum3) ? "Alnum" : "Not Alnum");

    //ft_isascii
    int test_ascii1 = 'A';
    int test_ascii2 = 123;
    int test_ascii3 = 200;

    printf("--ft_isascii:       ");
    printf("%c == %s  || ", test_ascii1, ft_isascii(test_ascii1) ? "ASCII" : "Not ASCII");
    printf("%c == %s  || ", test_ascii2, ft_isascii(test_ascii2) ? "ASCII" : "Not ASCII");
    printf("%c == %s\n", test_ascii3, ft_isascii(test_ascii3) ? "ASCII" : "Not ASCII");

    //ft_isprint
    int test_print1 = 'A';
    int test_print2 = '\t';
    int test_print3 = '1';

    printf("--ft_isprint:       ");
    printf("%c == %s  || ", test_print1, ft_isprint(test_print1) ? "Printable" : "Not Printable");
    printf("%c == %s  || ", test_print2, ft_isprint(test_print2) ? "Printable" : "Not Printable");
    printf("%c == %s\n", test_print3, ft_isprint(test_print3) ? "Printable" : "Not Printable");

    //ft_strlen
    char test_strlen1[] = "Hello, World!";
    char test_strlen2[] = "";
    char test_strlen3[] = "12345";

    printf("--ft_strlen:        ");
    printf("%s == %lu  || ", test_strlen1, ft_strlen(test_strlen1));
    printf("%s == %lu  || ", test_strlen2, ft_strlen(test_strlen2));
    printf("%s == %lu\n", test_strlen3, ft_strlen(test_strlen3));

    //ft_memset
    char test_memset[] = "Hello, World!";
    int fill_char = '*';
    size_t fill_size = 7;

    printf("--ft_memset:        ");
    printf("%s == ", test_memset);
    ft_memset(test_memset, fill_char, fill_size);
    printf("%s\n", test_memset);

    // ft_bzero

    char test_bzero[] = "Hello, World!";
    size_t bzero_size = 5;

    printf("--ft_bzero:         ");
    printf("%s == ", test_bzero);

    ft_bzero(test_bzero, bzero_size);

    printf("%s\n", test_bzero);

    // ft_memcpy
    char memcpy_src_string[] = "Hello, World!";
    char memcpy_dest_string[20];

    printf("--ft_memcpy:        ");
    printf("%s == ", memcpy_src_string);
    ft_memcpy(memcpy_dest_string, memcpy_src_string, ft_strlen(memcpy_src_string) + 1);
    printf("%s\n", memcpy_dest_string);
    
    // ft_memmove
    char memmove_src_string[] = "Hello, World!";
    char memmove_dest_string[20];

    printf("--ft_memmove:       ");
    printf("%s == ", memmove_src_string);
    ft_memmove(memmove_dest_string, memmove_src_string, ft_strlen(memmove_src_string) + 1);
    printf("%s\n", memmove_dest_string);

    // ft_strlcpy
    char strlcpy_src_string[] = "Hello, World!";
    char strlcpy_dest_string[20];

    printf("--ft_strlcpy:       ");
    printf("%s == ", strlcpy_src_string);
    size_t strlcpy_result = ft_strlcpy(strlcpy_dest_string, strlcpy_src_string, sizeof(strlcpy_dest_string));
    printf("%s (%zu)\n", strlcpy_dest_string, strlcpy_result);

    // ft_strlcat
    char strlcat_dest_string[20] = "Hello, ";
    char strlcat_src_string[] = "World!";
    
    printf("--ft_strlcat:       ");
    printf("%s == ", strlcat_dest_string);
    size_t strlcat_result = ft_strlcat(strlcat_dest_string, strlcat_src_string, sizeof(strlcat_dest_string));
    printf("%s (%zu)\n", strlcat_dest_string, strlcat_result);

    // ft_toupper
    char toupper_lowercase_char = 'a';
    char toupper_uppercase_char = ft_toupper(toupper_lowercase_char);

    printf("--ft_toupper:       ");
    printf("%c == %c\n", toupper_lowercase_char, toupper_uppercase_char);

    // ft_tolower
    char tolower_uppercase_char = 'A';
    char tolower_lowercase_char = ft_tolower(tolower_uppercase_char);

    printf("--ft_tolower:       ");
    printf("%c == %c\n", tolower_uppercase_char, tolower_lowercase_char);

    //ft_strchr
    const char *str_strchr = "Hello, World!";
    int strchr_character_to_find = 'o';

    printf("--ft_strchr:        ");
    printf("%s (to find: %c) == ", str_strchr, strchr_character_to_find);

    char *result_strchr = ft_strchr(str_strchr, strchr_character_to_find);
    if (result_strchr) 
    {
        printf("Found at position: %ld\n", result_strchr - str_strchr);
    } 
    else 
    {
        printf("Not Found.\n");
    }

    // ft_strrchr
    const char *str_strrchr = "Hello, World!";
    int strrchr_character_to_find = 'o';

    printf("--ft_strrchr:       ");
    printf("%s (to find: %c) == ", str_strrchr, strrchr_character_to_find);

    char *result_strrchr = ft_strrchr(str_strrchr, strrchr_character_to_find);
    if (result_strrchr) 
    {
        printf("Found at position: %ld\n", result_strrchr - str_strrchr);
    } 
    else 
    {
        printf("Not Found.\n");
    }

    // ft_strncmp

    char *str1_strncmp = "Hello";
    char *str2_strncmp = "Hella";
    unsigned int n_strncmp = 5;

    printf("--ft_strncmp:       ");
    printf("%s && %s (%u characters) == ", str1_strncmp, str2_strncmp, n_strncmp);
    int result_strncmp = ft_strncmp(str1_strncmp, str2_strncmp, n_strncmp);

    if (result_strncmp < 0)
    {
        printf("%s is smaller.\n", str1_strncmp);
    }
    else if (result_strncmp > 0)
    {
        printf("%s is smaller.\n", str2_strncmp);
    }
    else
    {
        printf("%s is equal to %s.\n", str1_strncmp, str2_strncmp);
    }

    //ft_memchr

    const char *str_memchr = "Hello, World!";
    int character_to_find_memchr = 'W';
    size_t n_memchr = 10;

    printf("--ft_memchr:        ");
    printf("%s (to find: %c in %zu characters) == ", str_memchr, character_to_find_memchr, n_memchr);

    char *result_memchr = ft_memchr(str_memchr, character_to_find_memchr, n_memchr);
    if (result_memchr)
    {
        printf("Found at position: %ld\n", result_memchr - str_memchr);
    }
    else
    {
        printf("Not Found. \n");
    }

    //memcmp

    const char *str_memcmp1 = "Hello, World!";
    const char *str_memcmp2 = "Hello, Warld!";
    size_t n_memcmp = 10;

    printf("--ft_memcmp:        ");
    printf("%s && %s (%zu characters) == ", str_memcmp1, str_memcmp2, n_memcmp);
    int result_memcmp = ft_memcmp(str_memcmp1, str_memcmp2, n_memcmp);
    if (result_memcmp < 0)
    {
        printf("%s is smaller.\n", str_memcmp1);
    }
    else if (result_memcmp > 0)
    {
        printf("%s is smaller.\n", str_memcmp2);
    }
    else
    {
        printf("%s is equal to %s.\n", str_memcmp1, str_memcmp2);
    }

    // strnstr

    const char *str1_strnstr = "Hello, World!";
    const char *str2_strnstr = "World";
    size_t len_strnstr = 13;

    printf("--ft_strnstr:       ");
    printf("%s (search %s in %zu characters) == ", str1_strnstr, str2_strnstr, len_strnstr);

    char *result_strnstr = ft_strnstr(str1_strnstr, str2_strnstr, len_strnstr);
    if (result_strnstr)
    {
        printf("Found at position: %ld\n", result_strnstr - str1_strnstr);
    }
    else
    {
        printf("Not Found. \n");
    }

    // calloc

    size_t num_elements = 3;
    size_t element_size = sizeof(int);
    int *array = (int *)ft_calloc(num_elements, element_size);

    printf("--ft_calloc:        ");

    if (array == NULL) 
    {
        printf("--> Memory allocation failed.\n");
        return 1;
    }
    for (size_t i = 0; i < num_elements; ++i)
    {
        printf("array[%zu] = %d ||", i, array[i]);
    }
    free(array);
    printf("\n");

    // strdup

    const char *strdup_original_str = "Hello, World!";
    
    printf("--ft_strdup:        ");
    printf("%s == ", strdup_original_str);

    char *strdup_duplicate_str = ft_strdup(strdup_original_str);
    if (strdup_duplicate_str)
    {
        printf(" %s", strdup_duplicate_str);
        free(strdup_duplicate_str);
        printf("(Memory deallocated).\n");
    }
    else
    {
        printf(" --> Memory allocation failed.\n");
    }

    // substr

    const char *substr_original_str = "Hello World!";
    unsigned int substr_start_index = 6;
    size_t substr_substring_len = 5;

    printf("--ft_substr:        ");        
    printf("%zu characters from %s (pos. %u) == ", substr_substring_len,substr_original_str, substr_start_index);

    char *substr_substring = ft_substr(substr_original_str, substr_start_index, substr_substring_len);

    if (substr_substring)
    {
        printf("%s", substr_substring);
        free(substr_substring);
        printf(" (Memory deallocated).\n");
    }
    else
    {
        printf(" --> Memory allocation failed.\n");
    }

    // strjoin

    const char *strjoin_str1 = "Hello, ";
    const char *strjoin_str2 = "World!";

    printf("--ft_strjoin:       ");
    printf("%s and %s == ", strjoin_str1, strjoin_str2);

    char *result_strjoin = ft_strjoin(strjoin_str1, strjoin_str2);

    if (result_strjoin)
    {
        printf("%s", result_strjoin);
        free(result_strjoin);
        printf(" (Memory deallocated).\n");
    }
    else
    {
        printf("--> Memory allocation failed.\n");
    }

    // strtrim

    const char *strtrim_original_str = "---Hello, World!---";
    const char *strtrim_trim_set = "-";
    
    printf("--ft_strtrim:       ");       
    printf("%s == ", strtrim_original_str);

    char *strtrim_trimmed_str = ft_strtrim(strtrim_original_str, strtrim_trim_set);

    if (strtrim_trimmed_str)
    {
        printf("%s", strtrim_trimmed_str);
        free(strtrim_trimmed_str);
        printf("(Memory deallocated).\n");
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    // split

    const char *split_test_string = "Hello, World!";
    char split_delimiter = ' ';
    char **split_result = ft_split(split_test_string, split_delimiter);

    printf("--ft_split:         ");       
    printf("%s ==", split_test_string);

    if (!split_result)
    {
        fprintf(stderr, " --> Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; split_result[i] != NULL; i++)
    {
        printf(" Word %d: %s ||", i + 1, split_result[i]);
    }
    printf("\n");

    // itoa

    int itoa_num1 = 123;
    int itoa_num2 = -456;
    char *itoa_str1 = ft_itoa(itoa_num1);
    char *itoa_str2 = ft_itoa(itoa_num2);

    printf("--ft_itoa:          ");

    if (itoa_str1 == NULL || itoa_str2 == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Number 1: %s || ", itoa_str1);
    printf("Number 2: %s\n", itoa_str2);
    free(itoa_str1);
    free(itoa_str2);

    // strmapi

    printf("--ft_strmapi:       ");
    printf("---in progress---\n");

    // striteri

    printf("--ft_striteri:      ");
    printf("---in progress---\n");

    // putchar_fd

    char putchar_character = 'H';
    int putchar_stdout_fd = 1;

    printf("--ft_putchar_fd:    ");
    fflush(stdout);
    ft_putchar_fd(putchar_character, putchar_stdout_fd);
    printf("\n");

    // putstr_fd

    char putstr_str[] = "Hello, World!";
    int putstr_stdout_fd = 1;

    printf("--ft_putstr_fd:     ");
    fflush(stdout);
    ft_putstr_fd(putstr_str, putstr_stdout_fd);
    printf("\n");

    // putendl_fd

    char putdendl_str[] = "Hello, World!";
    int putdendl_stdout_fd = 1;

    printf("--ft_putendl_fd:    ");
    fflush(stdout);
    ft_putendl_fd(putdendl_str, putdendl_stdout_fd);

    // putnbr_fd
    int putnbr_number = -12345;
    int putnbr_stdout_fd = 1;

    printf("--ft_putnbr_fd:     ");
    fflush(stdout);
    ft_putnbr_fd(putnbr_number, putnbr_stdout_fd);
    printf("\n");

    return 0;
}