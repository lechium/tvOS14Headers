//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSURL;

@interface SATVActivationResponse : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSDictionary *_headers;	// 16 = 0x10
    NSURL *_baseURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100077dd0
@property(retain) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain) NSData *data; // @synthesize data=_data;

@end

