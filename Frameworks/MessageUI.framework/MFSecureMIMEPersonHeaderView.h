/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UILabel, NSArray, UIView, NSString;

@interface MFSecureMIMEPersonHeaderView : UIView  {
    UIView *_backgroundView;
    UIView *_signedLabel;
    UIView *_secureLabel;
    UIView *_warningLabel;
    UILabel *_label;
    NSArray *_buttons;
    unsigned int _editing : 1;
}

@property(copy) NSString * signedLabelText;
@property(copy) NSString * secureLabelText;
@property(copy) NSString * warningLabelText;
@property(copy) NSString * explanationText;
@property(copy) NSArray * buttons;
@property BOOL editing;


- (id)warningLabelText;
- (id)secureLabelText;
- (id)signedLabelText;
- (void)setSignedLabelText:(id)arg1;
- (void)_insert:(BOOL)arg1 subview:(id)arg2;
- (id)_warningLabel;
- (id)_secureLabel;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (id)_signedLabel;
- (void)setExplanationText:(id)arg1;
- (void)setWarningLabelText:(id)arg1;
- (void)setSecureLabelText:(id)arg1;
- (void)setButtons:(id)arg1;
- (id)explanationText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)buttons;
- (void)setEditing:(BOOL)arg1;
- (BOOL)editing;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end