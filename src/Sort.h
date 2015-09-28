#ifndef __GRANITE_SORT_H__
#define __GRANITE_SORT_H__

namespace Granite {

  class Sort {
  protected:
    int id;
    int size;
    
  public:
    Sort(int _id, int _size) {}

    bool operator==(const Sort& other) const {
      return id == other.id && size == other.size;
    }
    
  };

}

#endif
