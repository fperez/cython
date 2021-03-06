class CountAllocDealloc {
  public:
      CountAllocDealloc(int* alloc_count, int* dealloc_count)
          : _alloc_count(alloc_count), _dealloc_count(dealloc_count) {
        (*_alloc_count)++;
      }
      ~CountAllocDealloc() {
        (*_dealloc_count)++;
      }
  private:
    int* _alloc_count;
    int* _dealloc_count;
};
