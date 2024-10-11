@interface WebTextIteratorPrivate : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > { struct __compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > { struct TextIterator *__value_; } __ptr_; } _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { unsigned short *m_buffer; unsigned int m_capacity; unsigned int m_size; } _upconvertedText;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
