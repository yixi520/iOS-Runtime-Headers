/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTaskScheduler : NSObject

- (void)cancelAllTasks;
- (void)cancelTaskForToken:(struct NSNumber { Class x1; }*)arg1;
- (struct NSNumber { Class x1; }*)scheduleTask:(id /* block */)arg1;

@end