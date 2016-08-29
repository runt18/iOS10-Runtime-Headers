/* Generated by RuntimeBrowser.
 */

@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>

@required

- (TSKAnnotationAuthor *)author;
- (void)commentWillBeAddedToDocumentRoot;
- (NSDate *)date;
- (TSPObject *)hostingModel;
- (void)setAuthor:(TSKAnnotationAuthor *)arg1;

@optional

- (NSString *)changeTrackingContentFormatString;
- (NSString *)changeTrackingContentString;
- (NSString *)changeTrackingTitleString;
- (void)setStorage:(TSDCommentStorage *)arg1;
- (TSDCommentStorage *)storage;
- (bool)wantsAnnotationPopover;

@end