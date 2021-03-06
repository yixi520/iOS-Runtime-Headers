/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFeedbackMessage : NSObject {
    NSDate * _creationDate;
    NSString * _feedbackType;
}

@property (nonatomic, readonly) NSString *feedbackType;
@property (nonatomic, readonly) CPLServerFeedbackMessage *serverMessage;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)feedbackType;
- (id)init;
- (id)serverMessage;

@end
