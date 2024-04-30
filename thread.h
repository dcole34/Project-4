#ifndef THREAD_H   
#define THREAD_H

// function prototypes for threads
void *process_thread(void *arg);
void memory_access(char rw, int register_num, int virtual_address);
void translate(int process_num, int virtual_address);
int get_free_frame();
void add_free_frame(int frame_num);
void add_to_clock(int frame_num);
void evict_page(int process_num, int page_num);
void initialize_memory_management(const char *input_file, const char *output_file, unsigned int seed);
void cleanup_memory_management();

#endif  /* THREAD_H */
