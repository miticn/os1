#include "../lib/hw.h"

#ifdef __cplusplus
extern "C" {
#endif
    void* mem_alloc(size_t blocks);
    int mem_free(void* ptr);
    class _thread;
    typedef _thread* thread_t;
    int thread_create(thread_t* handle, void(*start_routine)(void*), void* arg);
    int thread_exit ();
    void thread_dispatch ();

    class _sem;
    typedef _sem* sem_t;
    int sem_open (sem_t* handle, unsigned init);
    int sem_close (sem_t handle);
    int sem_wait (sem_t id);
    int sem_signal (sem_t id);

    void putc(char c);
#ifdef __cplusplus
}
#endif
