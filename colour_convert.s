	.text
	.file	"colour_convert.c"
	.globl	rgb_clamp                       // -- Begin function rgb_clamp
	.p2align	2
	.type	rgb_clamp,@function
rgb_clamp:                              // @rgb_clamp
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	s0, [sp, #12]
	ldr	s0, [sp, #12]
	fcmp	s0, #0.0
	cset	w8, pl
	tbnz	w8, #0, .LBB0_2
	b	.LBB0_1
.LBB0_1:
	mov	w8, wzr
	str	w8, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB0_6
.LBB0_2:
	ldr	s0, [sp, #12]
	mov	w8, #1132396544                 // =0x437f0000
	fmov	s1, w8
	fcmp	s0, s1
	cset	w8, le
	tbnz	w8, #0, .LBB0_4
	b	.LBB0_3
.LBB0_3:
	mov	w8, #255                        // =0xff
	str	w8, [sp]                        // 4-byte Folded Spill
	b	.LBB0_5
.LBB0_4:
	ldr	s0, [sp, #12]
	fcvtzu	w8, s0
	and	w8, w8, #0xffff
	str	w8, [sp]                        // 4-byte Folded Spill
	b	.LBB0_5
.LBB0_5:
	ldr	w8, [sp]                        // 4-byte Folded Reload
	str	w8, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB0_6
.LBB0_6:
	ldr	w8, [sp, #4]                    // 4-byte Folded Reload
	strh	w8, [sp, #10]
	ldrh	w0, [sp, #10]
	add	sp, sp, #16
	.cfi_def_cfa_offset 0
	ret
.Lfunc_end0:
	.size	rgb_clamp, .Lfunc_end0-rgb_clamp
	.cfi_endproc
                                        // -- End function
	.globl	y_clamp                         // -- Begin function y_clamp
	.p2align	2
	.type	y_clamp,@function
y_clamp:                                // @y_clamp
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	s0, [sp, #12]
	ldr	s0, [sp, #12]
	fmov	s1, #16.00000000
	fcmp	s0, s1
	cset	w8, pl
	tbnz	w8, #0, .LBB1_2
	b	.LBB1_1
.LBB1_1:
	mov	w8, #16                         // =0x10
	str	w8, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB1_6
.LBB1_2:
	ldr	s0, [sp, #12]
	mov	w8, #1132396544                 // =0x437f0000
	fmov	s1, w8
	fcmp	s0, s1
	cset	w8, le
	tbnz	w8, #0, .LBB1_4
	b	.LBB1_3
.LBB1_3:
	mov	w8, #235                        // =0xeb
	str	w8, [sp]                        // 4-byte Folded Spill
	b	.LBB1_5
.LBB1_4:
	ldr	s0, [sp, #12]
	fcvtzu	w8, s0
	and	w8, w8, #0xffff
	str	w8, [sp]                        // 4-byte Folded Spill
	b	.LBB1_5
.LBB1_5:
	ldr	w8, [sp]                        // 4-byte Folded Reload
	str	w8, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB1_6
.LBB1_6:
	ldr	w8, [sp, #4]                    // 4-byte Folded Reload
	strh	w8, [sp, #10]
	ldrh	w0, [sp, #10]
	add	sp, sp, #16
	.cfi_def_cfa_offset 0
	ret
.Lfunc_end1:
	.size	y_clamp, .Lfunc_end1-y_clamp
	.cfi_endproc
                                        // -- End function
	.globl	c_clamp                         // -- Begin function c_clamp
	.p2align	2
	.type	c_clamp,@function
c_clamp:                                // @c_clamp
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	s0, [sp, #12]
	ldr	s0, [sp, #12]
	fmov	s1, #16.00000000
	fcmp	s0, s1
	cset	w8, pl
	tbnz	w8, #0, .LBB2_2
	b	.LBB2_1
.LBB2_1:
	fmov	s0, #16.00000000
	str	s0, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB2_6
.LBB2_2:
	ldr	s0, [sp, #12]
	mov	w8, #1132396544                 // =0x437f0000
	fmov	s1, w8
	fcmp	s0, s1
	cset	w8, le
	tbnz	w8, #0, .LBB2_4
	b	.LBB2_3
.LBB2_3:
	mov	w8, #1131413504                 // =0x43700000
	fmov	s0, w8
	str	s0, [sp]                        // 4-byte Folded Spill
	b	.LBB2_5
.LBB2_4:
	ldr	s0, [sp, #12]
	str	s0, [sp]                        // 4-byte Folded Spill
	b	.LBB2_5
.LBB2_5:
	ldr	s0, [sp]                        // 4-byte Folded Reload
	str	s0, [sp, #4]                    // 4-byte Folded Spill
	b	.LBB2_6
.LBB2_6:
	ldr	s0, [sp, #4]                    // 4-byte Folded Reload
	fcvtzu	w8, s0
	strh	w8, [sp, #10]
	ldrh	w0, [sp, #10]
	add	sp, sp, #16
	.cfi_def_cfa_offset 0
	ret
.Lfunc_end2:
	.size	c_clamp, .Lfunc_end2-c_clamp
	.cfi_endproc
                                        // -- End function
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3, 0x0                          // -- Begin function rgbToCmyk
.LCPI3_0:
	.xword	0xbfb22d0e56041893              // double -0.070999999999999994
.LCPI3_1:
	.xword	0xbfd78d4fdf3b645a              // double -0.36799999999999999
.LCPI3_2:
	.xword	0x3fdc189374bc6a7f              // double 0.439
.LCPI3_3:
	.xword	0xbfd29fbe76c8b439              // double -0.29099999999999998
.LCPI3_4:
	.xword	0xbfc2f1a9fbe76c8b              // double -0.14799999999999999
.LCPI3_5:
	.xword	0x4060000000000000              // double 128
.LCPI3_6:
	.xword	0x3fb916872b020c4a              // double 0.098000000000000003
.LCPI3_7:
	.xword	0x3fe020c49ba5e354              // double 0.504
.LCPI3_8:
	.xword	0x3fd072b020c49ba6              // double 0.25700000000000001
	.text
	.globl	rgbToCmyk
	.p2align	2
	.type	rgbToCmyk,@function
rgbToCmyk:                              // @rgbToCmyk
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #208
	.cfi_def_cfa_offset 208
	stp	x29, x30, [sp, #176]            // 16-byte Folded Spill
	str	x28, [sp, #192]                 // 8-byte Folded Spill
	add	x29, sp, #176
	.cfi_def_cfa w29, 32
	.cfi_offset w28, -16
	.cfi_offset w30, -24
	.cfi_offset w29, -32
	ldrb	w17, [x29, #32]
	ldrb	w16, [x29, #40]
	ldrb	w15, [x29, #48]
	ldrb	w14, [x29, #56]
	ldr	x13, [x29, #64]
	ldr	x12, [x29, #72]
	ldr	x11, [x29, #80]
	ldr	x10, [x29, #88]
	ldr	x9, [x29, #96]
	ldr	x8, [x29, #104]
	sturb	w0, [x29, #-1]
	sturb	w1, [x29, #-2]
	sturb	w2, [x29, #-3]
	sturb	w3, [x29, #-4]
	sturb	w4, [x29, #-5]
	sturb	w5, [x29, #-6]
	sturb	w6, [x29, #-7]
	sturb	w7, [x29, #-8]
	sturb	w17, [x29, #-9]
	sturb	w16, [x29, #-10]
	sturb	w15, [x29, #-11]
	sturb	w14, [x29, #-12]
	stur	x13, [x29, #-24]
	stur	x12, [x29, #-32]
	stur	x11, [x29, #-40]
	stur	x10, [x29, #-48]
	stur	x9, [x29, #-56]
	stur	x8, [x29, #-64]
	ldurb	w8, [x29, #-1]
	ucvtf	s0, w8
	stur	s0, [x29, #-68]
	ldurb	w8, [x29, #-2]
	ucvtf	s0, w8
	stur	s0, [x29, #-72]
	ldurb	w8, [x29, #-3]
	ucvtf	s0, w8
	stur	s0, [x29, #-76]
	ldurb	w8, [x29, #-4]
	ucvtf	s0, w8
	stur	s0, [x29, #-80]
	ldurb	w8, [x29, #-5]
	ucvtf	s0, w8
	stur	s0, [x29, #-84]
	ldurb	w8, [x29, #-6]
	ucvtf	s0, w8
	str	s0, [sp, #88]
	ldurb	w8, [x29, #-7]
	ucvtf	s0, w8
	str	s0, [sp, #84]
	ldurb	w8, [x29, #-8]
	ucvtf	s0, w8
	str	s0, [sp, #80]
	ldurb	w8, [x29, #-9]
	ucvtf	s0, w8
	str	s0, [sp, #76]
	ldurb	w8, [x29, #-10]
	ucvtf	s0, w8
	str	s0, [sp, #72]
	ldurb	w8, [x29, #-11]
	ucvtf	s0, w8
	str	s0, [sp, #68]
	ldurb	w8, [x29, #-12]
	ucvtf	s0, w8
	str	s0, [sp, #64]
	ldur	s0, [x29, #-68]
	fcvt	d0, s0
	fmov	d4, #16.00000000
	adrp	x8, .LCPI3_8
	ldr	d2, [x8, :lo12:.LCPI3_8]
	fmadd	d3, d2, d0, d4
	ldur	s0, [x29, #-72]
	fcvt	d0, s0
	adrp	x8, .LCPI3_7
	ldr	d1, [x8, :lo12:.LCPI3_7]
	fmadd	d5, d1, d0, d3
	ldur	s0, [x29, #-76]
	fcvt	d3, s0
	adrp	x8, .LCPI3_6
	ldr	d0, [x8, :lo12:.LCPI3_6]
	fmadd	d3, d0, d3, d5
	fcvt	s3, d3
	str	s3, [sp, #60]
	ldur	s3, [x29, #-80]
	fcvt	d3, s3
	fmadd	d5, d2, d3, d4
	ldur	s3, [x29, #-84]
	fcvt	d3, s3
	fmadd	d5, d1, d3, d5
	ldr	s3, [sp, #88]
	fcvt	d3, s3
	fmadd	d3, d0, d3, d5
	fcvt	s3, d3
	str	s3, [sp, #56]
	ldr	s3, [sp, #84]
	fcvt	d3, s3
	fmadd	d5, d2, d3, d4
	ldr	s3, [sp, #80]
	fcvt	d3, s3
	fmadd	d5, d1, d3, d5
	ldr	s3, [sp, #76]
	fcvt	d3, s3
	fmadd	d3, d0, d3, d5
	fcvt	s3, d3
	str	s3, [sp, #52]
	ldr	s3, [sp, #72]
	fcvt	d3, s3
	fmadd	d3, d2, d3, d4
	ldr	s2, [sp, #68]
	fcvt	d2, s2
	fmadd	d2, d1, d2, d3
	ldr	s1, [sp, #64]
	fcvt	d1, s1
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	str	s0, [sp, #48]
	ldur	s0, [x29, #-68]
	fcvt	d0, s0
	adrp	x8, .LCPI3_5
	ldr	d4, [x8, :lo12:.LCPI3_5]
	adrp	x8, .LCPI3_4
	ldr	d5, [x8, :lo12:.LCPI3_4]
	fmadd	d1, d5, d0, d4
	ldur	s0, [x29, #-72]
	fcvt	d0, s0
	adrp	x8, .LCPI3_3
	ldr	d3, [x8, :lo12:.LCPI3_3]
	fmadd	d1, d3, d0, d1
	ldur	s0, [x29, #-76]
	fcvt	d0, s0
	adrp	x8, .LCPI3_2
	ldr	d2, [x8, :lo12:.LCPI3_2]
	fmadd	d0, d2, d0, d1
	fcvt	s0, d0
	str	s0, [sp, #44]
	ldur	s0, [x29, #-68]
	fcvt	d0, s0
	fmadd	d6, d2, d0, d4
	ldur	s0, [x29, #-72]
	fcvt	d0, s0
	adrp	x8, .LCPI3_1
	ldr	d1, [x8, :lo12:.LCPI3_1]
	fmadd	d7, d1, d0, d6
	ldur	s0, [x29, #-76]
	fcvt	d6, s0
	adrp	x8, .LCPI3_0
	ldr	d0, [x8, :lo12:.LCPI3_0]
	fmadd	d6, d0, d6, d7
	fcvt	s6, d6
	str	s6, [sp, #40]
	ldur	s6, [x29, #-80]
	fcvt	d6, s6
	fmadd	d7, d5, d6, d4
	ldur	s6, [x29, #-84]
	fcvt	d6, s6
	fmadd	d7, d3, d6, d7
	ldr	s6, [sp, #88]
	fcvt	d6, s6
	fmadd	d6, d2, d6, d7
	fcvt	s6, d6
	str	s6, [sp, #36]
	ldur	s6, [x29, #-80]
	fcvt	d6, s6
	fmadd	d7, d2, d6, d4
	ldur	s6, [x29, #-84]
	fcvt	d6, s6
	fmadd	d7, d1, d6, d7
	ldr	s6, [sp, #88]
	fcvt	d6, s6
	fmadd	d6, d0, d6, d7
	fcvt	s6, d6
	str	s6, [sp, #32]
	ldr	s6, [sp, #84]
	fcvt	d6, s6
	fmadd	d7, d5, d6, d4
	ldr	s6, [sp, #80]
	fcvt	d6, s6
	fmadd	d7, d3, d6, d7
	ldr	s6, [sp, #76]
	fcvt	d6, s6
	fmadd	d6, d2, d6, d7
	fcvt	s6, d6
	str	s6, [sp, #28]
	ldr	s6, [sp, #84]
	fcvt	d6, s6
	fmadd	d7, d2, d6, d4
	ldr	s6, [sp, #80]
	fcvt	d6, s6
	fmadd	d7, d1, d6, d7
	ldr	s6, [sp, #76]
	fcvt	d6, s6
	fmadd	d6, d0, d6, d7
	fcvt	s6, d6
	str	s6, [sp, #24]
	ldr	s6, [sp, #72]
	fcvt	d6, s6
	fmadd	d6, d5, d6, d4
	ldr	s5, [sp, #68]
	fcvt	d5, s5
	fmadd	d5, d3, d5, d6
	ldr	s3, [sp, #64]
	fcvt	d3, s3
	fmadd	d3, d2, d3, d5
	fcvt	s3, d3
	str	s3, [sp, #20]
	ldr	s3, [sp, #72]
	fcvt	d3, s3
	fmadd	d3, d2, d3, d4
	ldr	s2, [sp, #68]
	fcvt	d2, s2
	fmadd	d2, d1, d2, d3
	ldr	s1, [sp, #64]
	fcvt	d1, s1
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	str	s0, [sp, #16]
	ldr	s0, [sp, #44]
	ldr	s1, [sp, #36]
	fadd	s0, s0, s1
	ldr	s1, [sp, #28]
	fadd	s0, s0, s1
	ldr	s1, [sp, #20]
	fadd	s0, s0, s1
	fmov	s1, #4.00000000
	fdiv	s0, s0, s1
	str	s0, [sp, #12]
	ldr	s0, [sp, #40]
	ldr	s2, [sp, #32]
	fadd	s0, s0, s2
	ldr	s2, [sp, #24]
	fadd	s0, s0, s2
	ldr	s2, [sp, #16]
	fadd	s0, s0, s2
	fdiv	s0, s0, s1
	str	s0, [sp, #8]
	ldr	s0, [sp, #60]
	bl	y_clamp
	ldur	x8, [x29, #-24]
	strb	w0, [x8]
	ldr	s0, [sp, #56]
	bl	y_clamp
	ldur	x8, [x29, #-32]
	strb	w0, [x8]
	ldr	s0, [sp, #52]
	bl	y_clamp
	ldur	x8, [x29, #-40]
	strb	w0, [x8]
	ldr	s0, [sp, #48]
	bl	y_clamp
	ldur	x8, [x29, #-48]
	strb	w0, [x8]
	ldr	s0, [sp, #12]
	bl	c_clamp
	ldur	x8, [x29, #-56]
	strb	w0, [x8]
	ldr	s0, [sp, #8]
	bl	c_clamp
	ldur	x8, [x29, #-64]
	strb	w0, [x8]
	.cfi_def_cfa wsp, 208
	ldr	x28, [sp, #192]                 // 8-byte Folded Reload
	ldp	x29, x30, [sp, #176]            // 16-byte Folded Reload
	add	sp, sp, #208
	.cfi_def_cfa_offset 0
	.cfi_restore w28
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end3:
	.size	rgbToCmyk, .Lfunc_end3-rgbToCmyk
	.cfi_endproc
                                        // -- End function
	.section	.rodata.cst8,"aM",@progbits,8
	.p2align	3, 0x0                          // -- Begin function YCbCrTorgb
.LCPI4_0:
	.xword	0x400024dd2f1a9fbe              // double 2.0179999999999998
.LCPI4_1:
	.xword	0xbfd90624dd2f1aa0              // double -0.39100000000000001
.LCPI4_2:
	.xword	0x3fea04189374bc6a              // double 0.81299999999999994
.LCPI4_3:
	.xword	0x3ff29fbe76c8b439              // double 1.1639999999999999
.LCPI4_4:
	.xword	0x3ff989374bc6a7f0              // double 1.5960000000000001
	.text
	.globl	YCbCrTorgb
	.p2align	2
	.type	YCbCrTorgb,@function
YCbCrTorgb:                             // @YCbCrTorgb
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #208
	.cfi_def_cfa_offset 208
	stp	x29, x30, [sp, #176]            // 16-byte Folded Spill
	str	x28, [sp, #192]                 // 8-byte Folded Spill
	add	x29, sp, #176
	.cfi_def_cfa w29, 32
	.cfi_offset w28, -16
	.cfi_offset w30, -24
	.cfi_offset w29, -32
	ldr	x17, [x29, #32]
	ldr	x16, [x29, #40]
	ldr	x15, [x29, #48]
	ldr	x14, [x29, #56]
	ldr	x13, [x29, #64]
	ldr	x12, [x29, #72]
	ldr	x11, [x29, #80]
	ldr	x10, [x29, #88]
	ldr	x9, [x29, #96]
	ldr	x8, [x29, #104]
	sturb	w0, [x29, #-1]
	sturb	w1, [x29, #-2]
	sturb	w2, [x29, #-3]
	sturb	w3, [x29, #-4]
	sturb	w4, [x29, #-5]
	sturb	w5, [x29, #-6]
	stur	x6, [x29, #-16]
	stur	x7, [x29, #-24]
	stur	x17, [x29, #-32]
	stur	x16, [x29, #-40]
	stur	x15, [x29, #-48]
	stur	x14, [x29, #-56]
	stur	x13, [x29, #-64]
	stur	x12, [x29, #-72]
	stur	x11, [x29, #-80]
	str	x10, [sp, #88]
	str	x9, [sp, #80]
	str	x8, [sp, #72]
	ldurb	w8, [x29, #-1]
	ucvtf	s0, w8
	str	s0, [sp, #68]
	ldurb	w8, [x29, #-5]
	ucvtf	s0, w8
	str	s0, [sp, #64]
	ldurb	w8, [x29, #-6]
	ucvtf	s0, w8
	str	s0, [sp, #60]
	ldr	s0, [sp, #68]
	fmov	s1, #16.00000000
	str	s1, [sp, #24]                   // 4-byte Folded Spill
	fsub	s0, s0, s1
	fcvt	d1, s0
	ldr	s0, [sp, #60]
	movi	v2.2s, #67, lsl #24
                                        // kill: def $s2 killed $s2 killed $d2
	str	s2, [sp, #28]                   // 4-byte Folded Spill
	fsub	s0, s0, s2
	fcvt	d2, s0
	adrp	x8, .LCPI4_4
	ldr	d0, [x8, :lo12:.LCPI4_4]
	str	d0, [sp]                        // 8-byte Folded Spill
	fmul	d2, d0, d2
	adrp	x8, .LCPI4_3
	ldr	d0, [x8, :lo12:.LCPI4_3]
	str	d0, [sp, #40]                   // 8-byte Folded Spill
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s1, [sp, #28]                   // 4-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #59]
	ldr	s2, [sp, #68]
	fsub	s2, s2, s3
	fcvt	d2, s2
	ldr	s3, [sp, #60]
	fsub	s3, s3, s1
	fcvt	d4, s3
	adrp	x8, .LCPI4_2
	ldr	d3, [x8, :lo12:.LCPI4_2]
	str	d3, [sp, #8]                    // 8-byte Folded Spill
	fmul	d3, d3, d4
	fnmsub	d2, d0, d2, d3
	ldr	s0, [sp, #64]
	fsub	s0, s0, s1
	fcvt	d1, s0
	adrp	x8, .LCPI4_1
	ldr	d0, [x8, :lo12:.LCPI4_1]
	str	d0, [sp, #16]                   // 8-byte Folded Spill
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	s2, [sp, #24]                   // 4-byte Folded Reload
	ldr	s3, [sp, #28]                   // 4-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #58]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s2
	fcvt	d1, s1
	ldr	s2, [sp, #64]
	fsub	s2, s2, s3
	fcvt	d3, s2
	adrp	x8, .LCPI4_0
	ldr	d2, [x8, :lo12:.LCPI4_0]
	str	d2, [sp, #32]                   // 8-byte Folded Spill
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d2, [sp]                        // 8-byte Folded Reload
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #57]
	ldurb	w8, [x29, #-2]
	ucvtf	s1, w8
	str	s1, [sp, #68]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #60]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d4, [sp, #8]                    // 8-byte Folded Reload
	ldr	d0, [sp, #16]                   // 8-byte Folded Reload
	ldr	s5, [sp, #24]                   // 4-byte Folded Reload
	ldr	s3, [sp, #28]                   // 4-byte Folded Reload
	ldr	d1, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #56]
	ldr	s2, [sp, #68]
	fsub	s2, s2, s5
	fcvt	d2, s2
	ldr	s5, [sp, #60]
	fsub	s5, s5, s3
	fcvt	d5, s5
	fmul	d4, d4, d5
	fnmsub	d2, d1, d2, d4
	ldr	s1, [sp, #64]
	fsub	s1, s1, s3
	fcvt	d1, s1
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d2, [sp, #32]                   // 8-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #55]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #64]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d2, [sp]                        // 8-byte Folded Reload
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #54]
	ldurb	w8, [x29, #-3]
	ucvtf	s1, w8
	str	s1, [sp, #68]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #60]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d4, [sp, #8]                    // 8-byte Folded Reload
	ldr	d0, [sp, #16]                   // 8-byte Folded Reload
	ldr	s5, [sp, #24]                   // 4-byte Folded Reload
	ldr	s3, [sp, #28]                   // 4-byte Folded Reload
	ldr	d1, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #53]
	ldr	s2, [sp, #68]
	fsub	s2, s2, s5
	fcvt	d2, s2
	ldr	s5, [sp, #60]
	fsub	s5, s5, s3
	fcvt	d5, s5
	fmul	d4, d4, d5
	fnmsub	d2, d1, d2, d4
	ldr	s1, [sp, #64]
	fsub	s1, s1, s3
	fcvt	d1, s1
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d2, [sp, #32]                   // 8-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #52]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #64]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d2, [sp]                        // 8-byte Folded Reload
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #51]
	ldurb	w8, [x29, #-4]
	ucvtf	s1, w8
	str	s1, [sp, #68]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #60]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	d4, [sp, #8]                    // 8-byte Folded Reload
	ldr	d0, [sp, #16]                   // 8-byte Folded Reload
	ldr	s5, [sp, #24]                   // 4-byte Folded Reload
	ldr	s3, [sp, #28]                   // 4-byte Folded Reload
	ldr	d1, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #50]
	ldr	s2, [sp, #68]
	fsub	s2, s2, s5
	fcvt	d2, s2
	ldr	s5, [sp, #60]
	fsub	s5, s5, s3
	fcvt	d5, s5
	fmul	d4, d4, d5
	fnmsub	d2, d1, d2, d4
	ldr	s1, [sp, #64]
	fsub	s1, s1, s3
	fcvt	d1, s1
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	ldr	s3, [sp, #24]                   // 4-byte Folded Reload
	ldr	s4, [sp, #28]                   // 4-byte Folded Reload
	ldr	d2, [sp, #32]                   // 8-byte Folded Reload
	ldr	d0, [sp, #40]                   // 8-byte Folded Reload
	strb	w0, [sp, #49]
	ldr	s1, [sp, #68]
	fsub	s1, s1, s3
	fcvt	d1, s1
	ldr	s3, [sp, #64]
	fsub	s3, s3, s4
	fcvt	d3, s3
	fmul	d2, d2, d3
	fmadd	d0, d0, d1, d2
	fcvt	s0, d0
	bl	rgb_clamp
	strb	w0, [sp, #48]
	ldrb	w8, [sp, #59]
	ldur	x9, [x29, #-16]
	strb	w8, [x9]
	ldrb	w8, [sp, #58]
	ldur	x9, [x29, #-24]
	strb	w8, [x9]
	ldrb	w8, [sp, #57]
	ldur	x9, [x29, #-32]
	strb	w8, [x9]
	ldrb	w8, [sp, #56]
	ldur	x9, [x29, #-40]
	strb	w8, [x9]
	ldrb	w8, [sp, #55]
	ldur	x9, [x29, #-48]
	strb	w8, [x9]
	ldrb	w8, [sp, #54]
	ldur	x9, [x29, #-56]
	strb	w8, [x9]
	ldrb	w8, [sp, #53]
	ldur	x9, [x29, #-64]
	strb	w8, [x9]
	ldrb	w8, [sp, #52]
	ldur	x9, [x29, #-72]
	strb	w8, [x9]
	ldrb	w8, [sp, #51]
	ldur	x9, [x29, #-80]
	strb	w8, [x9]
	ldrb	w8, [sp, #50]
	ldr	x9, [sp, #88]
	strb	w8, [x9]
	ldrb	w8, [sp, #49]
	ldr	x9, [sp, #80]
	strb	w8, [x9]
	ldrb	w8, [sp, #48]
	ldr	x9, [sp, #72]
	strb	w8, [x9]
	.cfi_def_cfa wsp, 208
	ldr	x28, [sp, #192]                 // 8-byte Folded Reload
	ldp	x29, x30, [sp, #176]            // 16-byte Folded Reload
	add	sp, sp, #208
	.cfi_def_cfa_offset 0
	.cfi_restore w28
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end4:
	.size	YCbCrTorgb, .Lfunc_end4-YCbCrTorgb
	.cfi_endproc
                                        // -- End function
	.globl	LoadBitmapFile                  // -- Begin function LoadBitmapFile
	.p2align	2
	.type	LoadBitmapFile,@function
LoadBitmapFile:                         // @LoadBitmapFile
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #64
	.cfi_def_cfa_offset 64
	stp	x29, x30, [sp, #48]             // 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	x0, [x29, #-16]
	str	x1, [sp, #24]
	str	x2, [sp, #16]
	ldr	x0, [sp, #16]
	ldur	x3, [x29, #-16]
	mov	x1, #14                         // =0xe
	mov	x2, #1                          // =0x1
	bl	fread
	ldr	x8, [sp, #16]
	ldrh	w8, [x8]
	mov	w9, #19778                      // =0x4d42
	subs	w8, w8, w9
	cset	w8, eq
	tbnz	w8, #0, .LBB5_2
	b	.LBB5_1
.LBB5_1:
	ldur	x0, [x29, #-16]
	bl	fclose
                                        // kill: def $x8 killed $xzr
	stur	xzr, [x29, #-8]
	b	.LBB5_9
.LBB5_2:
	ldr	x0, [sp, #24]
	ldur	x3, [x29, #-16]
	mov	x1, #40                         // =0x28
	mov	x2, #1                          // =0x1
	bl	fread
	ldr	x8, [sp, #24]
	ldrh	w8, [x8, #14]
	subs	w8, w8, #24
	cset	w8, eq
	tbnz	w8, #0, .LBB5_4
	b	.LBB5_3
.LBB5_3:
	adrp	x0, .L.str
	add	x0, x0, :lo12:.L.str
	bl	printf
	ldur	x0, [x29, #-16]
	bl	fclose
                                        // kill: def $x8 killed $xzr
	stur	xzr, [x29, #-8]
	b	.LBB5_9
.LBB5_4:
	ldur	x0, [x29, #-16]
	ldr	x8, [sp, #16]
	ldur	w8, [x8, #10]
	mov	w1, w8
	mov	w2, wzr
	bl	fseek
	ldr	x8, [sp, #24]
	ldr	w8, [x8, #20]
	mov	w0, w8
	bl	malloc
	str	x0, [sp, #8]
	ldr	x8, [sp, #8]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB5_6
	b	.LBB5_5
.LBB5_5:
	ldr	x0, [sp, #8]
	bl	free
	ldur	x0, [x29, #-16]
	bl	fclose
                                        // kill: def $x8 killed $xzr
	stur	xzr, [x29, #-8]
	b	.LBB5_9
.LBB5_6:
	ldr	x0, [sp, #8]
	ldr	x8, [sp, #24]
	ldr	w8, [x8, #20]
	mov	w1, w8
	ldur	x3, [x29, #-16]
	mov	x2, #1                          // =0x1
	bl	fread
	ldr	x8, [sp, #8]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB5_8
	b	.LBB5_7
.LBB5_7:
	ldur	x0, [x29, #-16]
	bl	fclose
                                        // kill: def $x8 killed $xzr
	stur	xzr, [x29, #-8]
	b	.LBB5_9
.LBB5_8:
	ldr	x8, [sp, #8]
	stur	x8, [x29, #-8]
	b	.LBB5_9
.LBB5_9:
	ldur	x0, [x29, #-8]
	.cfi_def_cfa wsp, 64
	ldp	x29, x30, [sp, #48]             // 16-byte Folded Reload
	add	sp, sp, #64
	.cfi_def_cfa_offset 0
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end5:
	.size	LoadBitmapFile, .Lfunc_end5-LoadBitmapFile
	.cfi_endproc
                                        // -- End function
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
	.cfi_startproc
// %bb.0:
	sub	sp, sp, #400
	.cfi_def_cfa_offset 400
	stp	x29, x30, [sp, #368]            // 16-byte Folded Spill
	str	x28, [sp, #384]                 // 8-byte Folded Spill
	add	x29, sp, #368
	.cfi_def_cfa w29, 32
	.cfi_offset w28, -16
	.cfi_offset w30, -24
	.cfi_offset w29, -32
	stur	wzr, [x29, #-4]
	bl	clock
	stur	x0, [x29, #-144]
	adrp	x0, .L.str.1
	add	x0, x0, :lo12:.L.str.1
	adrp	x1, .L.str.2
	add	x1, x1, :lo12:.L.str.2
	bl	fopen
	stur	x0, [x29, #-80]
	ldur	x8, [x29, #-80]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB6_2
	b	.LBB6_1
.LBB6_1:
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_2:
	ldur	x0, [x29, #-80]
	sub	x1, x29, #44
	sub	x2, x29, #58
	bl	LoadBitmapFile
	stur	x0, [x29, #-72]
	ldur	w8, [x29, #-40]
	stur	w8, [x29, #-148]
	ldur	w8, [x29, #-36]
	stur	w8, [x29, #-152]
	ldur	w8, [x29, #-148]
	ldur	w9, [x29, #-152]
	mul	w8, w8, w9
	mov	w9, #6                          // =0x6
	mul	w8, w8, w9
	stur	w8, [x29, #-108]
	ldur	w8, [x29, #-108]
	mov	w0, w8
	bl	malloc
	stur	x0, [x29, #-104]
	ldur	w8, [x29, #-24]
	mov	w0, w8
	bl	malloc
	stur	x0, [x29, #-96]
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	adrp	x1, .L.str.5
	add	x1, x1, :lo12:.L.str.5
	bl	fopen
	stur	x0, [x29, #-160]
	ldur	x8, [x29, #-160]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB6_4
	b	.LBB6_3
.LBB6_3:
	adrp	x0, .L.str.6
	add	x0, x0, :lo12:.L.str.6
	bl	printf
	ldur	x0, [x29, #-160]
	bl	fclose
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_4:
	ldur	x0, [x29, #-160]
	mov	x1, xzr
	mov	w2, wzr
	bl	fseek
	ldur	x0, [x29, #-160]
	ldur	w2, [x29, #-148]
	ldur	w3, [x29, #-152]
	adrp	x1, .L.str.7
	add	x1, x1, :lo12:.L.str.7
	mov	w4, #255                        // =0xff
	bl	fprintf
	stur	wzr, [x29, #-128]
	b	.LBB6_5
.LBB6_5:                                // =>This Loop Header: Depth=1
                                        //     Child Loop BB6_7 Depth 2
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-36]
	subs	w9, w9, #2
	subs	w8, w8, w9
	cset	w8, hs
	tbnz	w8, #0, .LBB6_12
	b	.LBB6_6
.LBB6_6:                                //   in Loop: Header=BB6_5 Depth=1
	stur	wzr, [x29, #-132]
	b	.LBB6_7
.LBB6_7:                                //   Parent Loop BB6_5 Depth=1
                                        // =>  This Inner Loop Header: Depth=2
	ldur	w8, [x29, #-132]
	ldur	w9, [x29, #-40]
	subs	w9, w9, #2
	subs	w8, w8, w9
	cset	w8, hs
	tbnz	w8, #0, .LBB6_10
	b	.LBB6_8
.LBB6_8:                                //   in Loop: Header=BB6_7 Depth=2
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-40]
	mul	w8, w8, w9
	ldur	w9, [x29, #-132]
	add	w8, w8, w9
	mov	w9, #3                          // =0x3
	mul	w8, w8, w9
	stur	w8, [x29, #-112]
	ldur	w8, [x29, #-128]
	add	w8, w8, #1
	ldur	w10, [x29, #-40]
	mul	w8, w8, w10
	ldur	w10, [x29, #-132]
	add	w8, w8, w10
	mul	w8, w8, w9
	stur	w8, [x29, #-116]
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-40]
	mul	w8, w8, w9
	ldur	w9, [x29, #-132]
	add	w8, w8, w9
	mov	w9, #6                          // =0x6
	mul	w8, w8, w9
	stur	w8, [x29, #-120]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-161]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-162]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-163]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-164]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-165]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-112]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-166]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-167]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-168]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-169]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-170]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-171]
	ldur	x8, [x29, #-72]
	ldur	w9, [x29, #-116]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	sturb	w8, [x29, #-172]
	ldurb	w0, [x29, #-161]
	ldurb	w1, [x29, #-162]
	ldurb	w2, [x29, #-163]
	ldurb	w3, [x29, #-164]
	ldurb	w4, [x29, #-165]
	ldurb	w5, [x29, #-166]
	ldurb	w6, [x29, #-167]
	ldurb	w7, [x29, #-168]
	ldurb	w18, [x29, #-169]
	ldurb	w17, [x29, #-170]
	ldurb	w16, [x29, #-171]
	ldurb	w15, [x29, #-172]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
                                        // kill: def $x9 killed $w9
	add	x14, x8, x9
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x13, x8, x9
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x12, x8, x9
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x11, x8, x9
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x10, x8, x9
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	mov	x9, sp
	str	x9, [sp, #128]                  // 8-byte Folded Spill
	strb	w18, [x9]
	strb	w17, [x9, #8]
	strb	w16, [x9, #16]
	strb	w15, [x9, #24]
	str	x14, [x9, #32]
	str	x13, [x9, #40]
	str	x12, [x9, #48]
	str	x11, [x9, #56]
	str	x10, [x9, #64]
	str	x8, [x9, #72]
	bl	rgbToCmyk
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
	add	w10, w10, #1
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
	add	w10, w10, #2
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
	add	w10, w10, #3
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
	add	w10, w10, #4
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-112]
	add	w10, w10, #5
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
	add	w10, w10, #1
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
	add	w10, w10, #2
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
	add	w10, w10, #3
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
	add	w10, w10, #4
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	ldur	x8, [x29, #-104]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	ldur	x9, [x29, #-96]
	ldur	w10, [x29, #-116]
	add	w10, w10, #5
	mov	w10, w10
                                        // kill: def $x10 killed $w10
	add	x9, x9, x10
	strb	w8, [x9]
	b	.LBB6_9
.LBB6_9:                                //   in Loop: Header=BB6_7 Depth=2
	ldur	w8, [x29, #-132]
	add	w8, w8, #2
	stur	w8, [x29, #-132]
	b	.LBB6_7
.LBB6_10:                               //   in Loop: Header=BB6_5 Depth=1
	b	.LBB6_11
.LBB6_11:                               //   in Loop: Header=BB6_5 Depth=1
	ldur	w8, [x29, #-128]
	add	w8, w8, #2
	stur	w8, [x29, #-128]
	b	.LBB6_5
.LBB6_12:
	adrp	x0, .L.str.8
	add	x0, x0, :lo12:.L.str.8
	bl	printf
	ldur	x0, [x29, #-96]
	ldur	w8, [x29, #-24]
	mov	w1, w8
	ldur	x3, [x29, #-160]
	mov	x2, #1                          // =0x1
	bl	fwrite
	ldur	x0, [x29, #-160]
	bl	fclose
	adrp	x0, .L.str.9
	add	x0, x0, :lo12:.L.str.9
	bl	printf
	adrp	x0, .L.str.4
	add	x0, x0, :lo12:.L.str.4
	adrp	x1, .L.str.2
	add	x1, x1, :lo12:.L.str.2
	bl	fopen
	str	x0, [sp, #184]
	ldr	x8, [sp, #184]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB6_14
	b	.LBB6_13
.LBB6_13:
	adrp	x0, .L.str.3
	add	x0, x0, :lo12:.L.str.3
	bl	printf
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_14:
	ldr	x0, [sp, #184]
	adrp	x1, .L.str.10
	add	x1, x1, :lo12:.L.str.10
	add	x2, sp, #173
	str	x2, [sp, #120]                  // 8-byte Folded Spill
	bl	__isoc99_fscanf
	ldr	x1, [sp, #120]                  // 8-byte Folded Reload
	adrp	x0, .L.str.11
	add	x0, x0, :lo12:.L.str.11
	bl	printf
	ldrb	w8, [sp, #173]
	subs	w8, w8, #80
	cset	w8, ne
	tbnz	w8, #0, .LBB6_16
	b	.LBB6_15
.LBB6_15:
	ldrb	w8, [sp, #174]
	subs	w8, w8, #54
	cset	w8, eq
	tbnz	w8, #0, .LBB6_17
	b	.LBB6_16
.LBB6_16:
	adrp	x0, .L.str.12
	add	x0, x0, :lo12:.L.str.12
	bl	printf
	ldr	x0, [sp, #184]
	bl	fclose
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_17:
	ldur	w8, [x29, #-152]
                                        // kill: def $x8 killed $w8
	ldur	w9, [x29, #-148]
                                        // kill: def $x9 killed $w9
	mul	x8, x8, x9
	mov	x9, #3                          // =0x3
	mul	x0, x8, x9
	bl	malloc
	str	x0, [sp, #176]
	ldr	x0, [sp, #184]
	adrp	x1, .L.str.13
	add	x1, x1, :lo12:.L.str.13
	add	x2, sp, #164
	add	x3, sp, #160
	add	x4, sp, #168
	bl	__isoc99_fscanf
	ldr	x0, [sp, #184]
	bl	fgetc
	ldr	w1, [sp, #168]
	adrp	x0, .L.str.14
	add	x0, x0, :lo12:.L.str.14
	bl	printf
	ldr	w1, [sp, #160]
	adrp	x0, .L.str.15
	add	x0, x0, :lo12:.L.str.15
	bl	printf
	ldr	w1, [sp, #164]
	adrp	x0, .L.str.16
	add	x0, x0, :lo12:.L.str.16
	bl	printf
	ldr	w8, [sp, #168]
	subs	w8, w8, #255
	cset	w8, eq
	tbnz	w8, #0, .LBB6_19
	b	.LBB6_18
.LBB6_18:
	adrp	x0, .L.str.17
	add	x0, x0, :lo12:.L.str.17
	bl	printf
	ldr	x0, [sp, #184]
	bl	fclose
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_19:
	ldr	x0, [sp, #184]
	bl	ftell
	mov	w1, w0
	adrp	x0, .L.str.18
	add	x0, x0, :lo12:.L.str.18
	bl	printf
	ldr	x8, [sp, #184]
	str	x8, [sp, #112]                  // 8-byte Folded Spill
	ldr	x0, [sp, #184]
	bl	ftell
	mov	x1, x0
	ldr	x0, [sp, #112]                  // 8-byte Folded Reload
	mov	w2, wzr
	bl	fseek
	ldr	x0, [sp, #176]
	ldur	w8, [x29, #-148]
	ldur	w9, [x29, #-152]
	mul	w8, w8, w9
	mov	w9, #3                          // =0x3
	mul	w8, w8, w9
	mov	w8, w8
	mov	w2, w8
	ldr	x3, [sp, #184]
	mov	x1, #1                          // =0x1
	bl	fread
	adrp	x0, .L.str.19
	add	x0, x0, :lo12:.L.str.19
	adrp	x1, .L.str.5
	add	x1, x1, :lo12:.L.str.5
	bl	fopen
	stur	x0, [x29, #-88]
	ldur	x8, [x29, #-88]
	subs	x8, x8, #0
	cset	w8, ne
	tbnz	w8, #0, .LBB6_21
	b	.LBB6_20
.LBB6_20:
	adrp	x0, .L.str.20
	add	x0, x0, :lo12:.L.str.20
	bl	printf
	mov	w8, #1                          // =0x1
	stur	w8, [x29, #-4]
	b	.LBB6_30
.LBB6_21:
	stur	wzr, [x29, #-128]
	b	.LBB6_22
.LBB6_22:                               // =>This Loop Header: Depth=1
                                        //     Child Loop BB6_24 Depth 2
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-152]
	subs	w9, w9, #2
	subs	w8, w8, w9
	cset	w8, hs
	tbnz	w8, #0, .LBB6_29
	b	.LBB6_23
.LBB6_23:                               //   in Loop: Header=BB6_22 Depth=1
	stur	wzr, [x29, #-132]
	b	.LBB6_24
.LBB6_24:                               //   Parent Loop BB6_22 Depth=1
                                        // =>  This Inner Loop Header: Depth=2
	ldur	w8, [x29, #-132]
	add	w8, w8, #2
	ldur	w9, [x29, #-148]
	subs	w8, w8, w9
	cset	w8, hs
	tbnz	w8, #0, .LBB6_27
	b	.LBB6_25
.LBB6_25:                               //   in Loop: Header=BB6_24 Depth=2
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-148]
	mul	w8, w8, w9
	ldur	w9, [x29, #-132]
	add	w8, w8, w9
	mov	w9, #6                          // =0x6
	mul	w8, w8, w9
	stur	w8, [x29, #-112]
	ldur	w8, [x29, #-128]
	ldur	w9, [x29, #-148]
	mul	w8, w8, w9
	ldur	w9, [x29, #-132]
	add	w8, w8, w9
	mov	w9, #3                          // =0x3
	mul	w8, w8, w9
	stur	w8, [x29, #-120]
	ldur	w8, [x29, #-128]
	add	w8, w8, #1
	ldur	w10, [x29, #-148]
	mul	w8, w8, w10
	ldur	w10, [x29, #-132]
	add	w8, w8, w10
	mul	w8, w8, w9
	stur	w8, [x29, #-124]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-120]
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #159]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-120]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #158]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-124]
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #157]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-120]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #156]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-120]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #155]
	ldur	x8, [x29, #-96]
	ldur	w9, [x29, #-120]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	ldrb	w8, [x8]
	strb	w8, [sp, #154]
	ldrb	w0, [sp, #159]
	ldrb	w1, [sp, #158]
	ldrb	w2, [sp, #157]
	ldrb	w3, [sp, #156]
	ldrb	w4, [sp, #155]
	ldrb	w5, [sp, #154]
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
                                        // kill: def $x9 killed $w9
	add	x6, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x7, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x18, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x17, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x16, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-120]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x15, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
                                        // kill: def $x9 killed $w9
	add	x14, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
	add	w9, w9, #1
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x13, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
	add	w9, w9, #2
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x12, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
	add	w9, w9, #3
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x11, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
	add	w9, w9, #4
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x10, x8, x9
	ldr	x8, [sp, #176]
	ldur	w9, [x29, #-124]
	add	w9, w9, #5
	mov	w9, w9
                                        // kill: def $x9 killed $w9
	add	x8, x8, x9
	mov	x9, sp
	str	x9, [sp, #104]                  // 8-byte Folded Spill
	str	x18, [x9]
	str	x17, [x9, #8]
	str	x16, [x9, #16]
	str	x15, [x9, #24]
	str	x14, [x9, #32]
	str	x13, [x9, #40]
	str	x12, [x9, #48]
	str	x11, [x9, #56]
	str	x10, [x9, #64]
	str	x8, [x9, #72]
	bl	YCbCrTorgb
	b	.LBB6_26
.LBB6_26:                               //   in Loop: Header=BB6_24 Depth=2
	ldur	w8, [x29, #-132]
	add	w8, w8, #2
	stur	w8, [x29, #-132]
	b	.LBB6_24
.LBB6_27:                               //   in Loop: Header=BB6_22 Depth=1
	b	.LBB6_28
.LBB6_28:                               //   in Loop: Header=BB6_22 Depth=1
	ldur	w8, [x29, #-128]
	add	w8, w8, #2
	stur	w8, [x29, #-128]
	b	.LBB6_22
.LBB6_29:
	ldur	x0, [x29, #-88]
	mov	x1, xzr
	mov	w2, wzr
	str	w2, [sp, #92]                   // 4-byte Folded Spill
	bl	fseek
	ldur	x3, [x29, #-88]
	sub	x0, x29, #58
	str	x0, [sp, #80]                   // 8-byte Folded Spill
	mov	x1, #14                         // =0xe
	mov	x2, #1                          // =0x1
	str	x2, [sp, #96]                   // 8-byte Folded Spill
	bl	fwrite
	ldr	x2, [sp, #96]                   // 8-byte Folded Reload
	ldur	x3, [x29, #-88]
	sub	x0, x29, #44
	mov	x1, #40                         // =0x28
	bl	fwrite
	ldr	x8, [sp, #80]                   // 8-byte Folded Reload
	ldr	w2, [sp, #92]                   // 4-byte Folded Reload
	ldur	x0, [x29, #-88]
	ldur	w8, [x8, #10]
	mov	w1, w8
	bl	fseek
	ldr	x2, [sp, #96]                   // 8-byte Folded Reload
	ldr	x0, [sp, #176]
	ldur	w8, [x29, #-148]
	ldur	w9, [x29, #-152]
	mul	w8, w8, w9
	mov	w9, #3                          // =0x3
	mul	w8, w8, w9
	mov	w8, w8
	mov	w1, w8
	ldur	x3, [x29, #-88]
	bl	fwrite
	ldur	x0, [x29, #-80]
	bl	fclose
	ldr	x0, [sp, #184]
	bl	fclose
	ldur	x0, [x29, #-88]
	bl	fclose
	ldur	x0, [x29, #-72]
	bl	free
	ldur	x0, [x29, #-104]
	bl	free
	ldr	x0, [sp, #176]
	bl	free
	ldur	x0, [x29, #-96]
	bl	free
	bl	clock
	str	x0, [sp, #144]
	ldr	x8, [sp, #144]
	ldur	x9, [x29, #-144]
	subs	x8, x8, x9
	mov	x9, #16960                      // =0x4240
	movk	x9, #15, lsl #16
	sdiv	x8, x8, x9
	scvtf	d0, x8
	str	d0, [sp, #136]
	adrp	x0, .L.str.21
	add	x0, x0, :lo12:.L.str.21
	bl	printf
	ldr	d0, [sp, #136]
	adrp	x0, .L.str.22
	add	x0, x0, :lo12:.L.str.22
	bl	printf
	stur	wzr, [x29, #-4]
	b	.LBB6_30
.LBB6_30:
	ldur	w0, [x29, #-4]
	.cfi_def_cfa wsp, 400
	ldr	x28, [sp, #384]                 // 8-byte Folded Reload
	ldp	x29, x30, [sp, #368]            // 16-byte Folded Reload
	add	sp, sp, #400
	.cfi_def_cfa_offset 0
	.cfi_restore w28
	.cfi_restore w30
	.cfi_restore w29
	ret
.Lfunc_end6:
	.size	main, .Lfunc_end6-main
	.cfi_endproc
                                        // -- End function
	.type	.L.str,@object                  // @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Error: Only 24-bit RGB BMP images are supported.\n"
	.size	.L.str, 50

	.type	.L.str.1,@object                // @.str.1
.L.str.1:
	.asciz	"../input1.bmp"
	.size	.L.str.1, 14

	.type	.L.str.2,@object                // @.str.2
.L.str.2:
	.asciz	"rb"
	.size	.L.str.2, 3

	.type	.L.str.3,@object                // @.str.3
.L.str.3:
	.asciz	"Failed to open input file.\n"
	.size	.L.str.3, 28

	.type	.L.str.4,@object                // @.str.4
.L.str.4:
	.asciz	"./output_YCC.ppm"
	.size	.L.str.4, 17

	.type	.L.str.5,@object                // @.str.5
.L.str.5:
	.asciz	"wb"
	.size	.L.str.5, 3

	.type	.L.str.6,@object                // @.str.6
.L.str.6:
	.asciz	"Error: Could not create ppm"
	.size	.L.str.6, 28

	.type	.L.str.7,@object                // @.str.7
.L.str.7:
	.asciz	"P6\n%u %u\n%d\n"
	.size	.L.str.7, 13

	.type	.L.str.8,@object                // @.str.8
.L.str.8:
	.asciz	"ok"
	.size	.L.str.8, 3

	.type	.L.str.9,@object                // @.str.9
.L.str.9:
	.asciz	"Conversion to YCBCR complete.\n"
	.size	.L.str.9, 31

	.type	.L.str.10,@object               // @.str.10
.L.str.10:
	.asciz	"%2s"
	.size	.L.str.10, 4

	.type	.L.str.11,@object               // @.str.11
.L.str.11:
	.asciz	"mm1: %2s \n"
	.size	.L.str.11, 11

	.type	.L.str.12,@object               // @.str.12
.L.str.12:
	.asciz	"Error: magicnum not a valid PPM file.\n"
	.size	.L.str.12, 39

	.type	.L.str.13,@object               // @.str.13
.L.str.13:
	.asciz	"%d %d %d"
	.size	.L.str.13, 9

	.type	.L.str.14,@object               // @.str.14
.L.str.14:
	.asciz	"color: %d \n"
	.size	.L.str.14, 12

	.type	.L.str.15,@object               // @.str.15
.L.str.15:
	.asciz	"biHeight: %d \n"
	.size	.L.str.15, 15

	.type	.L.str.16,@object               // @.str.16
.L.str.16:
	.asciz	"biWidth: %d \n"
	.size	.L.str.16, 14

	.type	.L.str.17,@object               // @.str.17
.L.str.17:
	.asciz	"Error: Only PPM files with 8-bit color depth are supported.\n"
	.size	.L.str.17, 61

	.type	.L.str.18,@object               // @.str.18
.L.str.18:
	.asciz	"currpos: %d \n"
	.size	.L.str.18, 14

	.type	.L.str.19,@object               // @.str.19
.L.str.19:
	.asciz	"./RGB_Output.bmp"
	.size	.L.str.19, 17

	.type	.L.str.20,@object               // @.str.20
.L.str.20:
	.asciz	"Failed to create output file.\n"
	.size	.L.str.20, 31

	.type	.L.str.21,@object               // @.str.21
.L.str.21:
	.asciz	"Conversion to RGB complete.\n"
	.size	.L.str.21, 29

	.type	.L.str.22,@object               // @.str.22
.L.str.22:
	.asciz	"Time measured: %.3f seconds.\n"
	.size	.L.str.22, 30

	.ident	"Debian clang version 17.0.0 (++20230725053429+d0b54bb50e51-1~exp1~20230725173444.1)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym rgb_clamp
	.addrsig_sym y_clamp
	.addrsig_sym c_clamp
	.addrsig_sym rgbToCmyk
	.addrsig_sym YCbCrTorgb
	.addrsig_sym LoadBitmapFile
	.addrsig_sym fread
	.addrsig_sym fclose
	.addrsig_sym printf
	.addrsig_sym fseek
	.addrsig_sym malloc
	.addrsig_sym free
	.addrsig_sym clock
	.addrsig_sym fopen
	.addrsig_sym fprintf
	.addrsig_sym fwrite
	.addrsig_sym __isoc99_fscanf
	.addrsig_sym fgetc
	.addrsig_sym ftell
