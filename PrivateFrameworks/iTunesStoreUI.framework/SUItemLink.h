/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString;

@interface SUItemLink : NSObject <NSCopying> {
    int _linkTarget;
    int _linkType;
    NSString *_title;
    NSURL *_url;
}

@property int linkTarget;
@property int linkType;
@property(copy) NSString * title;
@property(retain) NSURL * URL;


- (void)setLinkType:(int)arg1;
- (void)setLinkTarget:(int)arg1;
- (int)linkTarget;
- (int)linkType;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (void)setURL:(id)arg1;

@end