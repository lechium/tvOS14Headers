/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
@end
