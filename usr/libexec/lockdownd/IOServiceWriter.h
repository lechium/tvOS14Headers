//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOServiceWriter : NSObject
{
    _Bool _isErase;	// 8 = 0x8
    _Bool _shouldCommit;	// 9 = 0x9
    unsigned int _service;	// 12 = 0xc
    unsigned int _serviceConnect;	// 16 = 0x10
}

@property _Bool shouldCommit; // @synthesize shouldCommit=_shouldCommit;
@property _Bool isErase; // @synthesize isErase=_isErase;
@property unsigned int serviceConnect; // @synthesize serviceConnect=_serviceConnect;
@property unsigned int service; // @synthesize service=_service;
- (void)dealloc;	// IMP=0x00000001000311b4
- (_Bool)finished;	// IMP=0x0000000100031174
- (int)eraseBytes:(unsigned int)arg1 ofLength:(unsigned int)arg2 withError:(id *)arg3;	// IMP=0x0000000100031168
- (int)readDataAtOffset:(unsigned int)arg1 ofLength:(unsigned int)arg2 intoBuffer:(void *)arg3;	// IMP=0x000000010003115c
- (id)readDataAtOffset:(unsigned int)arg1 ofLength:(unsigned int)arg2;	// IMP=0x0000000100031154
- (int)openService;	// IMP=0x0000000100031118
- (int)writeData:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100031078
- (int)writeBytes:(char *)arg1 ofLength:(unsigned long long)arg2 withError:(id *)arg3;	// IMP=0x0000000100031030
- (_Bool)isAvailable;	// IMP=0x000000010003100c
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000100030fb4

@end

