//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

@class MMQLPreviewItem;

@interface MMPreviewAvatarImageWindowController : MMPreviewWindowController
{
    MMQLPreviewItem *m_currentPreviewAvatarItem;
}

- (void).cxx_destruct;
- (void)previewAvatar;
- (id)_genPreviewItemWithContact:(id)arg1;
- (void)_setupPreviewController;
- (id)getCurrentPreviewItem;
- (void)show;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end

