/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryPropertyListLoader : NSObject <WBSHistoryLoader> {
    <WBSHistoryLoaderDelegate> * _delegate;
    Class  _historyItemClass;
    unsigned int  _itemCountLimit;
    BOOL  _loadInProgress;
    NSMutableArray * _loadedDiscardedItems;
    NSMutableArray * _loadedItems;
    NSCountedSet * _loadedStringsForUserTypedDomainExpansion;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSHistoryLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_loadHistory;
- (BOOL)_loadHistoryFromDictionary:(id)arg1;
- (id)delegate;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned int)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)setDelegate:(id)arg1;
- (void)startLoading;
- (void)waitForLoadingToComplete;

@end