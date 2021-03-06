/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import <ChatKit/CKMessagePart.h>

#import "CKMessagePart.h"

@class CKMediaObject, NSData, UIImage;

@interface CKMediaObjectMessagePart : CKMessagePart
{
    CKMediaObject *_mediaObject;
    UIImage *_composeImage;
    NSData *_previewData;
    NSData *_composeData;
    NSData *_dataForHighlight;
}

- (id)detachedCopy;
- (id)initWithMediaObject:(id)arg1;
@property(readonly, nonatomic) UIImage *composeImage; // @synthesize composeImage=_composeImage;
- (BOOL)isDisplayable;
- (int)_orientation;
- (void)setComposeData:(id)arg1;
- (void)setPreviewData:(id)arg1;
- (id)highlightData;
- (id)composeData;
- (id)previewData;
- (void)copyToPasteboard;
- (int)type;
- (void)dealloc;
@property(readonly, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;

@end

