/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLQueryImpl_SQL : MLQueryImpl 
{
    struct __CFArray { } *_indexCharRunDataRef;
    NSUInteger _indexCharRunDataPropertyType;
    struct __CPRecordIDDictionary { } *_groupMembersMappingRef;
    unsigned long long _searchedPlaylistPersistentID;
}


- (void)freeQueryResults;
- (NSUInteger)countOfEntities;
- (struct CPRecordStore { }*)storeRef;
- (void*)getDBRecordOfEntityAtIndex:(NSUInteger)arg1;
- (NSInteger)_getDBRecordIDOfEntityAtIndex:(NSUInteger)arg1;
- (struct __CPRecordIDArray { }*)groupMembersOfEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)_countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (struct __CFArray { }*)bucketizedInfoByFirstCharacterForStringProperty:(unsigned long)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (void)playlistContentsDidChangeNotification:(id)arg1;
- (id)copyStringValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;

@end
