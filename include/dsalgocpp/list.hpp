
namespace dsa
{
    template<typename T>
    class LinkedList{

        public:
        LinkedList(T data):m_data{data}, m_next{nullptr}{};
        LinkedList(T&& data):m_data{data}, m_next{nullptr}{};
        LinkedList push(T data){
            m_next = new LinkedList{data};

            return *m_next;
        };
        void push(T&& data);
        void remove(std::size_t index);
        void pop(){
            LinkedList *last = m_next;
        };

        ~LinkedList(){delete m_next;}

        private:
        LinkedList * m_next;
        T m_data;

    };
    
} // namespace dsa
