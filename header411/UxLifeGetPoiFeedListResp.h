//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSData, NSMutableArray;

@interface UxLifeGetPoiFeedListResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCtrlbuf:1;
    unsigned int hasContinueFlag:1;
    unsigned int continueFlag_:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableFeedlistList;
    NSData *ctrlbuf;
}

+ (id)parseFromData:(id)arg1;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(retain, nonatomic, setter=SetCtrlbuf:) NSData *ctrlbuf; // @synthesize ctrlbuf;
@property(readonly, nonatomic) BOOL hasCtrlbuf; // @synthesize hasCtrlbuf;
@property(retain, nonatomic) NSMutableArray *mutableFeedlistList; // @synthesize mutableFeedlistList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addFeedlist:(id)arg1;
- (void)addFeedlistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetContinueFlag:) BOOL continueFlag; // @synthesize continueFlag=continueFlag_;
@property(retain, nonatomic) NSMutableArray *feedlist; // @dynamic feedlist;
- (id)feedlistList;
- (id)init;

@end
