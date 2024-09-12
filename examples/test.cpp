#include "../include/jkc/core/base/dtypes.hpp" // 注意：这里假设你的头文件命名为jkc_dtypes.hpp，并且与源文件在同一目录下  
  
int main() {  
    // 使用jkc命名空间中的类型  
    jkc::size_type arraySize = 10; // 使用jkc命名空间中的size_type  
    jkc::int32 myInt32 = -12345; // 使用jkc命名空间中的int32  
    jkc::float64 myDouble = 3.14159; // 使用jkc命名空间中的float64  
  
    // 你也可以使用using声明来简化对命名空间成员的访问  
    using jkc::size_type;  
    using jkc::int32;  
    using jkc::float64;  
  
    // 现在可以直接使用这些类型，而不需要jkc::前缀  
    size_type anotherArraySize = 20;  
    int32 anotherInt32 = 67890;  
    float64 anotherDouble = 2.71828;  
  
    // 注意：如果你使用了using namespace jkc; 那么你就不需要在每个类型前加jkc::了，  
    // 但这通常不推荐在头文件或大型项目中这样做，因为它可能会导致命名冲突。  
  
    return 0;  
}