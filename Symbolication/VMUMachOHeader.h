/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSDate, NSString, NSArray, NSData, VMUDySymTabLoadCommand, VMUSymTabLoadCommand, VMUSegmentLoadCommand;
@protocol VMUMemory;

@interface VMUMachOHeader : VMUHeader {
	NSString* _name;
	NSString* _path;
	NSDate* _timestamp;
	id<VMUMemory> _memory;
	unsigned long long _address;
	unsigned long long _linkEditBase;
	NSArray* _loadCommands;
	long long _vmaddrSlide;
	unsigned _fileType;
	unsigned _flags;
}
-(NSString*)name;
-(NSString*)path;
-(NSDate*)timestamp;
-(void)setName:(NSString*)name;
-(void)setPath:(NSString*)path;
-(void)setTimestamp:(NSDate*)timestamp;
-(id<VMUMemory>)memory;
-(VMUArchitecture*)architecture;
-(NSArray*)loadCommands;	// NSArray of VMULoadCommand's.
-(unsigned long long)address;
-(unsigned long long)linkEditBase;
-(long long)vmaddrSlide;
-(unsigned)fileType;
-(unsigned)flags;
-(BOOL)isFromSharedCache;
// inherited: -(BOOL)isMachO;
-(VMUSegmentLoadCommand*)segmentNamed:(NSString*)segmentName;
-(NSArray*)sections;	// NSArray of VMUSection's
-(NSArray*)regions;	// NSArray of VMURegion's
-(VMUSymTabLoadCommand*)symbolTable;
-(VMUDySymTabLoadCommand*)dySymbolTable;
-(id)dyLinkerPath;
-(NSData*)uuid;
-(BOOL)isCommpage;
-(id)commpage;
-(BOOL)isProtected;
-(NSArray*)segmentAddresses;	// NSArray of VMURegion's
// inherited: -(id)signature;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end

