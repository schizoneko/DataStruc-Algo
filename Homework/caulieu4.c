/*Định nghĩa một cấu trúc danh sách liên kết đơn để lưu trữ các file trong một 
thư mục D>Document trên máy tính. Các file được sắp xếp theo trật tự thời gian. 
Sau đó thực hiện tao tác:  

1. Khai báo cấu trúc của danh sách liên kết. Các thông tin chứa ở mỗi node sinh 
    viên tự đưa vào để đảm bảo các nội dung sau được thực hiện 
2. Copy paste một file từ thư mục khác sang thư mục trên sao do file luôn được 
    chèn vào theo trật tự thời gian  
3. Thực hiện tính toán kích thước các file trong thư mục 
4. Người ta muốn sao lưu các file trong thư mục trên vào một ổ USB có kích thước 
    32G. Hãy thực hiện loại bỏ dần nếu cần một số file có kích thước nhỏ nhất để 
    có thể thực hiện được thao tác trên.  */

#include <stdio.h>
#include <string.h>

typedef struct file {
    int data;
    struct file *next;
} file;

