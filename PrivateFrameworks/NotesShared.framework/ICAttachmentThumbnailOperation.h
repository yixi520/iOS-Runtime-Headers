/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentThumbnailOperation : NSBlockOperation {
    ICAttachmentPreviewImageLoader * _attachmentPreviewImageLoader;
    NSCache * _cache;
    NSString * _cacheKey;
    NSMutableArray * _completionBlocks;
    id /* block */  _fallbackBlock;
    unsigned int  _imageScaling;
    BOOL  _isMovie;
    NSURL * _mediaURL;
    struct CGSize { 
        float width; 
        float height; 
    }  _minSize;
    id /* block */  _processingBlock;
    BOOL  _showAsFileIcon;
}

@property (nonatomic, retain) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader;
@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (nonatomic) unsigned int imageScaling;
@property (nonatomic) BOOL isMovie;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic) struct CGSize { float x1; float x2; } minSize;
@property (nonatomic, copy) id /* block */ processingBlock;
@property (nonatomic) BOOL showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)attachmentPreviewImageLoader;
- (id)cache;
- (id)cacheKey;
- (id)completionBlocks;
- (id /* block */)fallbackBlock;
- (unsigned int)imageScaling;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7 fallbackBlock:(id /* block */)arg8;
- (BOOL)isMovie;
- (void)main;
- (id)mediaURL;
- (struct CGSize { float x1; float x2; })minSize;
- (id /* block */)processingBlock;
- (void)setAttachmentPreviewImageLoader:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setImageScaling:(unsigned int)arg1;
- (void)setIsMovie:(BOOL)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setProcessingBlock:(id /* block */)arg1;
- (void)setShowAsFileIcon:(BOOL)arg1;
- (BOOL)showAsFileIcon;

@end