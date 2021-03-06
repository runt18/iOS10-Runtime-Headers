/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagController : NSObject <FCTagsFetchOperationDelegate> {
    FCAssetManager * _assetManager;
    FCTagsSearchOperation * _channelSearchOperation;
    FCCKDatabase * _contentDatabase;
    NSCache * _fastCache;
    FCTagRecordSource * _tagRecordSource;
    FCTagsSearchOperation * _topicSearchOperation;
}

@property (nonatomic, retain) FCAssetManager *assetManager;
@property (nonatomic, retain) FCTagsSearchOperation *channelSearchOperation;
@property (nonatomic, retain) FCCKDatabase *contentDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagRecordSource *tagRecordSource;
@property (nonatomic, retain) FCTagsSearchOperation *topicSearchOperation;

+ (bool)isTagAllowed:(id)arg1;
+ (bool)isTagAllowedInContentStoreFront:(id)arg1;

- (void).cxx_destruct;
- (id)_cachedTagForTagID:(id)arg1;
- (id)_cachedTagsForTagIDs:(id)arg1;
- (void)_fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)_inferRelativePriorityForQualityOfService:(long long)arg1;
- (id)assetManager;
- (id)cachedTagForID:(id)arg1;
- (id)cachedTagsForIDs:(id)arg1;
- (id)channelSearchOperation;
- (id)contentDatabase;
- (id)fastCache;
- (void)fetchChannelsForSearchString:(id)arg1 batchSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)fetchOperationForTagsWithIDs:(id)arg1;
- (id)fetchOperationForTagsWithIDs:(id)arg1 includeChildren:(bool)arg2;
- (void)fetchTagForTagID:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchTagForTagID:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTagsForTagIDs:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchTagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 callbackQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchTagsForTagIDs:(id)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchTopicsForSearchString:(id)arg1 batchSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithContentDatabase:(id)arg1 assetManager:(id)arg2 tagRecordSource:(id)arg3;
- (void)refreshTagsBasedOnAgeForTagIDs:(id)arg1;
- (void)saveTagsToCache:(id)arg1;
- (void)setAssetManager:(id)arg1;
- (void)setChannelSearchOperation:(id)arg1;
- (void)setContentDatabase:(id)arg1;
- (void)setFastCache:(id)arg1;
- (void)setTagRecordSource:(id)arg1;
- (void)setTopicSearchOperation:(id)arg1;
- (id)tagRecordSource;
- (void)tagsFetchOperation:(id)arg1 didFetchTagsByID:(id)arg2;
- (id)tagsForTagIDs:(id)arg1;
- (id)tagsForTagIDs:(id)arg1 maximumCachedAge:(double)arg2 predicate:(id /* block */)arg3;
- (id)tagsForTagIDs:(id)arg1 predicate:(id /* block */)arg2;
- (id)topicSearchOperation;

@end
