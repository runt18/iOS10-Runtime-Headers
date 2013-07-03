/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIButton, UILabel;

@interface PSFooterTextAndButtonView : UIView <PSHeaderFooterView> {
    UIButton *_button;
    UILabel *_descriptionLabel;
}

@property(readonly) UIButton * button;
@property(retain) UILabel * descriptionLabel;


- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (id)descriptionLabel;
- (float)preferredHeightForWidth:(float)arg1;
- (id)initWithSpecifier:(id)arg1;
- (id)button;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end