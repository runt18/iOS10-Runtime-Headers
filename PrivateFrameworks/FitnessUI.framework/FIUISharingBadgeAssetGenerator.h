/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUISharingBadgeAssetGenerator : NSObject

+ (unsigned long long)_badgeShapeForAchievement:(id)arg1;
+ (unsigned long long)_badgeShapeFromName:(id)arg1;
+ (struct CGSize { double x1; double x2; })_badgeSizeForSharedImageSize:(struct CGSize { double x1; double x2; })arg1 withdefaultBadgeSize:(struct CGSize { double x1; double x2; })arg2 defaultSharedImageSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)_drawDate:(id)arg1 inSharedImageOfSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGPoint { double x1; double x2; })_originForBadgeImageOfSize:(struct CGSize { double x1; double x2; })arg1 withinSharedImageOfSize:(struct CGSize { double x1; double x2; })arg2 forAchievement:(id)arg3;
+ (struct CGSize { double x1; double x2; })_sizeOfBadgeImageForAchievement:(id)arg1 withinSharePNGOfSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)generateSharingPNGForAchievement:(id)arg1;
+ (id)generateSharingPNGForWorkout:(id)arg1;

@end