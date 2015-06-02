/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusDebugOverlayView : UIView {
    UIView *_highlightView;
    UIColor *_overlayColor;
}

@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, copy) UIColor *overlayColor;

- (id)_focusItemsOverlayCreateIfNecessary:(BOOL)arg1;
- (void)_highlightPreferredFocusView:(id)arg1;
- (void)_removeFocusItemOverlayViews;
- (void)_unhighlightPreferredFocusView;
- (void)dealloc;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)highlightView;
- (id)initWithView:(id)arg1;
- (id)overlayColor;
- (void)setHighlightView:(id)arg1;
- (void)setOverlayColor:(id)arg1;

@end