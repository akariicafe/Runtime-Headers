@interface RLMObjectNotificationToken : RLMCancellationToken {
    struct Object { struct shared_ptr<realm::Realm> { struct Realm *__ptr_; struct __shared_weak_count *__cntrl_; } m_realm; struct ObjectSchema *m_object_schema; struct BasicRow<realm::Table> { struct BasicTableRef<realm::Table> { struct Table *m_ptr; } m_table; unsigned long long m_row_ndx; struct RowBase *m_prev; struct RowBase *m_next; } m_row; struct Handle<realm::_impl::ObjectNotifier> { struct ObjectNotifier *__ptr_; struct __shared_weak_count *__cntrl_; } m_notifier; } _object;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
