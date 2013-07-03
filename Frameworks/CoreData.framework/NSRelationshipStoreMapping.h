/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSArray;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping  {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}


- (void)setJoinSemantic:(unsigned int)arg1;
- (unsigned int)joinSemantic;
- (id)joins;
- (id)foreignKeys;
- (id)destinationEntityExternalName;
- (void)setJoins:(id)arg1;
- (void)setForeignKeys:(id)arg1;
- (void)setDestinationEntityExternalName:(id)arg1;
- (id)constraintDefinitions;
- (id)columnDefinitions;
- (id)relationship;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end