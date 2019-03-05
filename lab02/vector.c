/* Include the system headers we need */
#include <stdlib.h>
#include <stdio.h>

/* Include our header */
#include "vector.h"

/* Define what our struct is */
struct vector_t {
    size_t size;
    int *data;
};

/* Utility function to handle allocation failures. In this
   case we print a message and exit. */
static void allocation_failed() {
    fprintf(stderr, "Out of memory.\n");
    exit(1);
}

/* Bad example of how to create a new vector */
vector_t *bad_vector_new() {
    /* Create the vector and a pointer to it */
<<<<<<< HEAD

    //didn't allocate space for retval
=======
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
    vector_t *retval, v;
    retval = &v;

    /* Initialize attributes */
    retval->size = 1;
    retval->data = malloc(sizeof(int));
    if (retval->data == NULL) {
        allocation_failed();
    }

    retval->data[0] = 0;
    return retval;
}

/* Another suboptimal way of creating a vector */
vector_t also_bad_vector_new() {
    /* Create the vector */
    vector_t v;

    /* Initialize attributes */
    v.size = 1;
    v.data = malloc(sizeof(int));
    if (v.data == NULL) {
        allocation_failed();
    }
    v.data[0] = 0;
<<<<<<< HEAD

    //want to return a pointer, because right now you're passing by value. What's returned is a copy of the vector. 
=======
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
    return v;
}

/* Create a new vector with a size (length) of 1
   and set its single component to zero... the
   RIGHT WAY */
vector_t *vector_new() {
    /* Declare what this function will return */
    vector_t *retval;

    /* First, we need to allocate memory on the heap for the struct */
<<<<<<< HEAD
    retval = malloc(sizeof(vector_t));
    /* YOUR CODE HERE */

    /* Check our return value to make sure we got memory */
    if (retval == NULL) {
=======
    retval = /* YOUR CODE HERE */

    /* Check our return value to make sure we got memory */
    if (/* YOUR CODE HERE */) {
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
        allocation_failed();
    }

    /* Now we need to initialize our data.
       Since retval->data should be able to dynamically grow,
       what do you need to do? */
<<<<<<< HEAD
    retval->size = 1; /* YOUR CODE HERE */;
    retval->data = malloc(sizeof(int)); /* YOUR CODE HERE */;

    /* Check the data attribute of our vector to make sure we got memory */
    if (retval->data == NULL) {
=======
    retval->size = /* YOUR CODE HERE */;
    retval->data = /* YOUR CODE HERE */;

    /* Check the data attribute of our vector to make sure we got memory */
    if (/* YOUR CODE HERE */) {
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
        free(retval);				//Why is this line necessary?
        allocation_failed();
    }

    /* Complete the initialization by setting the single component to zero */
<<<<<<< HEAD
    *(retval->data)= 0;
=======
    /* YOUR CODE HERE */ = 0;
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4

    /* and return... */
    return retval;
}

/* Return the value at the specified location/component "loc" of the vector */
int vector_get(vector_t *v, size_t loc) {

    /* If we are passed a NULL pointer for our vector, complain about it and exit. */
    if(v == NULL) {
        fprintf(stderr, "vector_get: passed a NULL vector.\n");
        abort();
    }

    /* If the requested location is higher than we have allocated, return 0.
     * Otherwise, return what is in the passed location.
     */
<<<<<<< HEAD
    if (loc < v->size) {
        return v->data[loc];
=======
    if (loc < /* YOUR CODE HERE */) {
        return /* YOUR CODE HERE */;
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
    } else {
        return 0;
    }
}

/* Free up the memory allocated for the passed vector.
   Remember, you need to free up ALL the memory that was allocated. */
void vector_delete(vector_t *v) {
    /* YOUR SOLUTION HERE */
<<<<<<< HEAD
    if (v) {
        free(v->data);    
        free(v);
    }
=======
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
}

/* Set a value in the vector. If the extra memory allocation fails, call
   allocation_failed(). */
void vector_set(vector_t *v, size_t loc, int value) {
    /* What do you need to do if the location is greater than the size we have
     * allocated?  Remember that unset locations should contain a value of 0.
     */

    /* YOUR SOLUTION HERE */
<<<<<<< HEAD
    if(v == NULL) {
        allocation_failed(); 
    }

    if(loc > v->size) {
        int* intData = (int *) malloc(sizeof(int) * (loc+1));
        if(intData) {
            for (int i = 0; i < loc+1; i++) {
                if(i < v->size) {
                    intData[i] = v->data[i];
                } else if (i == loc) {
                    intData[loc] = value;    
                } else {
                    intData[i] = 0;
                }
            }
            free(v->data);
            v->size = loc + 1;
            v->data = intData; 
        } else {
            vector_delete(v);
            allocation_failed(); 
        }
    } else{
        v->data[loc] = value; 

    }

=======
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
}
