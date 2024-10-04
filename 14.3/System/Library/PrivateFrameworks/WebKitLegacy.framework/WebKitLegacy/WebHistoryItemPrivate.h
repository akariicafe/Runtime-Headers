@interface WebHistoryItemPrivate : NSObject {
    struct RefPtr<WebCore::HistoryItem, WTF::DumbPtrTraits<WebCore::HistoryItem> > { struct HistoryItem *m_ptr; } _historyItem;
    double _lastVisitedTime;
    struct unique_ptr<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> > > { struct __compressed_pair<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> *, std::__1::default_delete<WTF::Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> > > { struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> *__value_; } __ptr_; } _redirectURLs;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
