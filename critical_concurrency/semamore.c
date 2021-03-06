/**
 * critical_concurrency
 * CS 241 - Spring 2021
 */

#include "semamore.h"

/**
 * Initializes the Semamore. Important: the struct is assumed to have been
 * allocated by the user.
 * Example:
 * 	Semamore *s = malloc(sizeof(Semamore));
 * 	semm_init(s, 5, 10);
 *
 */
void semm_init(Semamore *s, int value, int max_val) {
    /* Your code here */
<<<<<<< HEAD
    s->value = value;
    s->max_val = max_val;
    pthread_mutex_init(&s->m, NULL);
    pthread_cond_init(&s->cv, NULL);
=======
>>>>>>> 4e017b983cba416b7655ea6088cd2c9f114d5997
}

/**
 *  Should block when the value in the Semamore struct (See semamore.h) is at 0.
 *  Otherwise, should decrement the value.
 */
void semm_wait(Semamore *s) {
    /* Your code here */
<<<<<<< HEAD
    pthread_mutex_lock(&s->m);
    while (s->value == 0) {
        pthread_cond_wait(&s->cv, &s->m); /*unlock mutex, wait, relock mutex*/
    }
    s->value--;
    pthread_cond_signal(&s->cv);
    pthread_mutex_unlock(&s->m);
=======
>>>>>>> 4e017b983cba416b7655ea6088cd2c9f114d5997
}

/**
 *  Should block when the value in the Semamore struct (See semamore.h) is at
 * max_value.
 *  Otherwise, should increment the value.
 */
void semm_post(Semamore *s) {
    /* Your code here */
<<<<<<< HEAD
    pthread_mutex_lock(&s->m);
    while (s->value == s->max_val) {
        pthread_cond_wait(&s->cv, &s->m); /*unlock mutex, wait, relock mutex*/
    }
    s->value ++;
    pthread_cond_signal(&s->cv);
    pthread_mutex_unlock(&s->m);
=======
>>>>>>> 4e017b983cba416b7655ea6088cd2c9f114d5997
}

/**
 * Takes a pointer to a Semamore struct to help cleanup some members of the
 * struct.
 * The actual Semamore struct must be freed by the user.
 */
void semm_destroy(Semamore *s) {
    /* Your code here */
<<<<<<< HEAD
    pthread_mutex_destroy(&s->m);
    pthread_cond_destroy(&s->cv);
=======
>>>>>>> 4e017b983cba416b7655ea6088cd2c9f114d5997
}
