/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SADomainObjectCancelCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectCancelCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCancelCompleted;

- (id)encodedClassName;
- (id)groupIdentifier;

@end