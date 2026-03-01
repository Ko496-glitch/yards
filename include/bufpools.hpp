#pragma once
#include<cstdint>
#include<array>


namespace yards{

  inline constexpr uint32_t MAXPOOLS           = 20;
  inline constexpr uint32_t MAX_BUFFER_SIZE    = 8192;
  inline constexpr uint32_t MAX_BUFFER_IN_POOL = 2048;
  inline constexpr uint16_t MIN_BUFFER_SIZE    = 8;

  using  SemaphoreId   = uint32_t;
  using  BufferPoolId = uint32_t;



  struct BufferPool{
    
    BufferPool* next{nullptr};

    SemaphoreId    count{};
    uint32_t      bpsize



  };

  extern struct BufferPool;
  

}
