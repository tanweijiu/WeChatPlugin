//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface Setting : NSObject <PBCoding>
{
    BOOL m_bNewMsgSound;
    BOOL m_bNewMsgVibration;
    unsigned int m_qqUin;
    unsigned int m_weixinUin;
    unsigned int m_uiStatus;
    unsigned int m_uiSelfShowType;
    NSString *m_nsUinPwdMD5;
    NSString *m_nsUin16PwdMD5;
    NSString *m_nsPassWordMD5;
    NSString *m_nsPwd16MD5;
    NSString *m_nsAutoAuthTicket;
    NSString *m_nsLastUUID;
    NSString *m_nsMsgPushSound;
    NSData *m_dtA2Key;
    NSData *m_dtLastKSid;
    NSData *m_dtAutoAuthKey;
}

+ (void)initialize;
+ (void)_initPBTableOfSetting;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(nonatomic) unsigned int m_uiSelfShowType; // @synthesize m_uiSelfShowType;
@property(retain) NSData *m_dtLastKSid; // @synthesize m_dtLastKSid;
@property(retain) NSData *m_dtA2Key; // @synthesize m_dtA2Key;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) BOOL m_bNewMsgVibration; // @synthesize m_bNewMsgVibration;
@property(nonatomic) BOOL m_bNewMsgSound; // @synthesize m_bNewMsgSound;
@property(retain) NSString *m_nsMsgPushSound; // @synthesize m_nsMsgPushSound;
@property(retain) NSString *m_nsLastUUID; // @synthesize m_nsLastUUID;
@property(retain) NSString *m_nsAutoAuthTicket; // @synthesize m_nsAutoAuthTicket;
@property(retain) NSString *m_nsPwd16MD5; // @synthesize m_nsPwd16MD5;
@property(retain) NSString *m_nsPassWordMD5; // @synthesize m_nsPassWordMD5;
@property(retain) NSString *m_nsUin16PwdMD5; // @synthesize m_nsUin16PwdMD5;
@property(retain) NSString *m_nsUinPwdMD5; // @synthesize m_nsUinPwdMD5;
@property(nonatomic) unsigned int m_weixinUin; // @synthesize m_weixinUin;
@property(nonatomic) unsigned int m_qqUin; // @synthesize m_qqUin;
- (void).cxx_destruct;
- (void)copyFromModUserInfo:(id)arg1;
- (void)copyFromServerObj:(id)arg1;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

