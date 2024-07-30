
namespace dsa
{
    template<typename T>
    class LinkedList{

        public:
        LinkedList();
        void push(T data);
        void push(T&& data);
        void remove(std::size_t index);
        void pop();

        private:
        LinkedList * next;
        T data;

    };
    
} // namespace dsa
